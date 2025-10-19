#include <catch2/../catch2/catch_session.hpp>
#include <catch2/catch_test_macros.hpp>
#include <fmt/format.h>

TEST_CASE("fmt", "[test]")
{
    REQUIRE(fmt::format("The answer is {}.", 42) == "The answer is 42.");
}

int main(int _argc, char* _argv[])
{
    auto result = Catch::Session().run(_argc, _argv);
    return result;
}
