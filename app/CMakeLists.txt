add_executable(metis-app main.cpp Parser.cpp 
 Sentiment.cpp
 PositiveSentiment.cpp
 NegativeSentiment.cpp
)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
