#pragma once
#include "../TypeMacros.hpp"

DECLARE_JSON_CLASS(ScoreSaber, Song, 
    GETTER_VALUE(int, Uid, "uid");
    GETTER_VALUE(std::string, Id, "id");
    GETTER_VALUE(std::string, Name, "name");
    GETTER_VALUE(std::string, SongSubName, "songSubName");
    GETTER_VALUE(std::string, SongAuthorName, "songAuthorName");
    GETTER_VALUE(std::string, LevelAuthorName, "levelAuthorName");
    GETTER_VALUE(int, Bpm, "bpm");
    GETTER_VALUE(std::string, Diff, "diff");
    GETTER_VALUE(std::string, Scores, "scores");
    GETTER_VALUE(int, Scores_day, "scores_day");
    GETTER_VALUE(int, Ranked, "ranked");
    GETTER_VALUE(float, Stars, "stars");
    GETTER_VALUE(std::string, Image, "image");
    ERROR_CHECK
)
