#include <server/mime_types/mime_types.hpp>

#define BOOST_TEST_MODULE TesteServerTestSuite2

#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_CASE( test_extension_to_types )
{
    std::string mime = http::server::mime_types::extension_to_type("gif");

    BOOST_CHECK_EQUAL(mime, "image/gif");
}