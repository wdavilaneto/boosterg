#include <server/header.hpp>

#define BOOST_TEST_MODULE TesteServerTestSuite

#include <boost/test/unit_test.hpp>

#define TEST_HEADER_ACCEPT "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8"

BOOST_AUTO_TEST_CASE(test_header) {

    http::server::header header1;
    header1.name = "Accept";
    header1.value = TEST_HEADER_ACCEPT;

    BOOST_CHECK_EQUAL(header1.name, "Accept");
    BOOST_CHECK_EQUAL(header1.value, TEST_HEADER_ACCEPT);

    http::server::header header2("Accept-Encoding", "gzip, deflate, sdch");
    BOOST_CHECK_EQUAL(header2.name, "Accept-Encoding");
    BOOST_CHECK_EQUAL(header2.value, "gzip, deflate, sdch");


}