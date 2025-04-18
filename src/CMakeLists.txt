
add_library(tinyccLexer SHARED Lexer.cpp)
add_library(tinyccParser SHARED Parser.cpp)

target_link_libraries(tinyccParser PUBLIC tinyccLexer)
