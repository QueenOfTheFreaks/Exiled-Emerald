//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/battle_partners.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/battle_partners.h' to remove #line markers.
//

#line 1 "src/data/battle_partners.party"

#line 1
    [PARTNER_NONE] =
    {
#line 3
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 4
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .encounterMusic_gender = 
#line 6
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 8
    [PARTNER_STEVEN] =
    {
#line 9
        .trainerName = _("STEVEN"),
#line 10
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .encounterMusic_gender = 
#line 13
            TRAINER_ENCOUNTER_MUSIC_MALE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 15
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 15
            .heldItem = ITEM_LEFTOVERS,
#line 18
            .ev = TRAINER_PARTY_EVS(252, 0, 232, 24, 0, 0),
#line 20
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 16
            .ability = ABILITY_STURDY,
#line 17
            .lvl = 73,
#line 19
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 21
                MOVE_BODY_PRESS,
                MOVE_STEALTH_ROCK,
                MOVE_ROOST,
                MOVE_TOXIC,
            },
            },
            {
#line 26
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 26
            .heldItem = ITEM_ASSAULT_VEST,
#line 29
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 31
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 27
            .ability = ABILITY_ROCK_HEAD,
#line 28
            .lvl = 74,
#line 30
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 31
                MOVE_EARTHQUAKE,
                MOVE_HEAD_SMASH,
                MOVE_DOUBLE_EDGE,
                MOVE_HEAVY_SLAM,
            },
            },
            {
#line 36
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 36
            .heldItem = ITEM_METAGROSSITE,
#line 39
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 248, 0, 4),
#line 41
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 37
            .ability = ABILITY_CLEAR_BODY,
#line 38
            .lvl = 76,
#line 40
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 41
                MOVE_BULLET_PUNCH,
                MOVE_PSYCHIC_FANGS,
                MOVE_HONE_CLAWS,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
