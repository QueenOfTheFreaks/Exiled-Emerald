LilycoveCity_DepartmentStore_4F_MapScripts::
	.byte 0

LilycoveCity_DepartmentStore_4F_EventScript_Gentleman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Woman::
	msgbox LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_Youngster::
	msgbox LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves, MSGBOX_NPC
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkLeft::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_AttackTMs:
	.2byte ITEM_TM_FIRE_PUNCH
	.2byte ITEM_TM_THUNDER_PUNCH
	.2byte ITEM_TM_ICE_PUNCH
	.2byte ITEM_TM_BODY_PRESS
	.2byte ITEM_TM_HEX
	.2byte ITEM_TM_HIGH_HORSEPOWER
	.2byte ITEM_TM_ICICLE_CRASH
	.2byte ITEM_TM_FIRST_IMPRESSION
	.2byte ITEM_TM_THUNDER_FANG
	.2byte ITEM_TM_ICE_FANG
	.2byte ITEM_TM_FIRE_FANG
	.2byte ITEM_TM_IRON_DEFENSE
	.2byte ITEM_TM_AURORA_VEIL
	.2byte ITEM_TM_MIRROR_COAT
	.2byte ITEM_TM_VOLT_TACKLE
	.2byte ITEM_TM_BLAZE_KICK
	.2byte ITEM_TM_SHADOW_BONE
	.2byte ITEM_TM_POWER_WHIP
	.2byte ITEM_TM_METEOR_BEAM
	.2byte ITEM_TM_FLIP_TURN
	.2byte ITEM_TM_SNATCH
	.2byte ITEM_TM_TORMENT
	.2byte ITEM_TM_MYSTICAL_FIRE
	.2byte ITEM_TM_DRAGON_TAIL
	.2byte ITEM_TM_PSYCHIC_FANGS
	.2byte ITEM_TM_DRAGON_CLAW
	.2byte ITEM_TM_WATER_PULSE
	.2byte ITEM_TM_CALM_MIND
	.2byte ITEM_TM_TOXIC
	.2byte ITEM_TM_SNOWSCAPE
	.2byte ITEM_TM_BULK_UP
	.2byte ITEM_TM_BULLET_SEED
	.2byte ITEM_TM_HIDDEN_POWER
	.2byte ITEM_TM_SUNNY_DAY
	.2byte ITEM_TM_TAUNT
	.2byte ITEM_TM_ICE_BEAM
	.2byte ITEM_TM_BLIZZARD
	.2byte ITEM_TM_HYPER_BEAM
	.2byte ITEM_TM_LIGHT_SCREEN
	.2byte ITEM_TM_REFLECT
	.2byte ITEM_TM_PROTECT
	.2byte ITEM_TM_RAIN_DANCE
	.2byte ITEM_TM_GIGA_DRAIN
	.2byte ITEM_TM_SAFEGUARD
	.2byte ITEM_TM_RETURN
	.2byte ITEM_TM_SOLAR_BEAM
	.2byte ITEM_TM_SOLAR_BLADE
	.2byte ITEM_TM_IRON_HEAD
	.2byte ITEM_TM_THUNDERBOLT
	.2byte ITEM_TM_THUNDER
	.2byte ITEM_TM_VOLT_SWITCH
	.2byte ITEM_TM_EARTHQUAKE
	.2byte ITEM_TM_DIG
	.2byte ITEM_TM_PSYCHIC
	.2byte ITEM_TM_SHADOW_BALL
	.2byte ITEM_TM_BRICK_BREAK
	.2byte ITEM_TM_ELECTROWEB
	.2byte ITEM_TM_FLAMETHROWER
	.2byte ITEM_TM_SLUDGE_BOMB
	.2byte ITEM_TM_SANDSTORM
	.2byte ITEM_TM_FIRE_BLAST
	.2byte ITEM_TM_ROCK_TOMB
	.2byte ITEM_TM_AERIAL_ACE
	.2byte ITEM_TM_FACADE
	.2byte ITEM_TM_SECRET_POWER
	.2byte ITEM_TM_REST
	.2byte ITEM_TM_THIEF
	.2byte ITEM_TM_COVET
	.2byte ITEM_TM_STEEL_WING
	.2byte ITEM_TM_LEECH_LIFE
	.2byte ITEM_TM_OVERHEAT
	.2byte ITEM_TM_ROOST
	.2byte ITEM_TM_FOCUS_BLAST
	.2byte ITEM_TM_ENERGY_BALL
	.2byte ITEM_TM_FALSE_SWIPE
	.2byte ITEM_TM_HONE_CLAWS
	.2byte ITEM_TM_CHARGE_BEAM
	.2byte ITEM_TM_DUAL_WINGBEAT
	.2byte ITEM_TM_DRAGON_PULSE
	.2byte ITEM_TM_DRAIN_PUNCH
	.2byte ITEM_TM_WILL_O_WISP
	.2byte ITEM_TM_SILVER_WIND
	.2byte ITEM_TM_VENOSHOCK
	.2byte ITEM_TM_SHADOW_CLAW
	.2byte ITEM_TM_KNOCK_OFF
	.2byte ITEM_TM_GIGA_IMPACT
	.2byte ITEM_TM_ROCK_POLISH
	.2byte ITEM_TM_FLASH
	.2byte ITEM_TM_STONE_EDGE
	.2byte ITEM_TM_AVALANCHE
	.2byte ITEM_TM_THUNDER_WAVE
	.2byte ITEM_TM_GYRO_BALL
	.2byte ITEM_TM_SWORDS_DANCE
	.2byte ITEM_TM_STEALTH_ROCK
	.2byte ITEM_TM_TRAILBLAZE
	.2byte ITEM_TM_LOW_KICK
	.2byte ITEM_TM_DARK_PULSE
	.2byte ITEM_TM_ROCK_SLIDE
	.2byte ITEM_TM_X_SCISSOR
	.2byte ITEM_TM_SLEEP_TALK
	.2byte ITEM_TM_SCALD
	.2byte ITEM_TM_POISON_JAB
	.2byte ITEM_TM_GRASS_KNOT
	.2byte ITEM_TM_BRAVE_BIRD
	.2byte ITEM_TM_GRASSY_GLIDE
	.2byte ITEM_TM_TRIPLE_AXEL
	.2byte ITEM_TM_FLASH_CANNON
	.2byte ITEM_TM_SUBSTITUTE
	.2byte ITEM_TM_U_TURN
	.2byte ITEM_TM_BULLDOZE
	.2byte ITEM_TM_DRACO_METEOR
	.2byte ITEM_TM_WILD_CHARGE
	.2byte ITEM_TM_POWER_UP_PUNCH
	.2byte ITEM_TM_DAZZLING_GLEAM
	.2byte ITEM_TM_SLUDGE_WAVE
	.2byte ITEM_TM_PSYSHOCK
	.2byte ITEM_TM_SMART_STRIKE
	.2byte ITEM_TM_ACROBATICS
	.2byte ITEM_TM_DEFOG
	.2byte ITEM_TM_SMACK_DOWN
	.2byte ITEM_TM_TRICK_ROOM
	.2byte ITEM_TM_ATTRACT
	.2byte ITEM_TM_AURA_SPHERE
	.2byte ITEM_TM_AIR_SLASH
	.2byte ITEM_TM_CRUNCH
	.2byte ITEM_TM_PLAY_ROUGH
	.2byte ITEM_TM_EARTH_POWER
	.2byte ITEM_TM_BODY_SLAM
	.2byte ITEM_TM_SHOCK_WAVE
	.2byte ITEM_TM_FRUSTRATION
	.2byte ITEM_TM_DOUBLE_TEAM
	.2byte ITEM_TM_ROAR
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_EventScript_ClerkRight::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LilycoveCity_DepartmentStore_4F_Pokemart_DefenseTMs:
	.2byte ITEM_LONELY_MINT
	.2byte ITEM_ADAMANT_MINT
	.2byte ITEM_NAUGHTY_MINT
	.2byte ITEM_BRAVE_MINT
	.2byte ITEM_BOLD_MINT
	.2byte ITEM_IMPISH_MINT
	.2byte ITEM_LAX_MINT
	.2byte ITEM_RELAXED_MINT
	.2byte ITEM_MODEST_MINT
	.2byte ITEM_MILD_MINT
	.2byte ITEM_RASH_MINT
	.2byte ITEM_QUIET_MINT
	.2byte ITEM_CALM_MINT
	.2byte ITEM_GENTLE_MINT
	.2byte ITEM_CAREFUL_MINT
	.2byte ITEM_SASSY_MINT
	.2byte ITEM_TIMID_MINT
	.2byte ITEM_HASTY_MINT
	.2byte ITEM_JOLLY_MINT
	.2byte ITEM_NAIVE_MINT
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_ABILITY_CAPSULE
	.2byte ITEM_ABILITY_PATCH
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_PP_UP
	.2byte ITEM_PP_MAX
	.2byte ITEM_HEALTH_MOCHI
	.2byte ITEM_MUSCLE_MOCHI
	.2byte ITEM_RESIST_MOCHI
	.2byte ITEM_GENIUS_MOCHI
	.2byte ITEM_CLEVER_MOCHI
	.2byte ITEM_SWIFT_MOCHI
	.2byte ITEM_FRESH_START_MOCHI
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_4F_Text_AttackOrDefenseTM:
	.string "Hmm…\p"
	.string "An attacking move…\n"
	.string "Or a defensive move…\p"
	.string "It's no easy matter to decide which TM\n"
	.string "moves should be taught to POKéMON…$"

LilycoveCity_DepartmentStore_4F_Text_FiftyDifferentTMs:
	.string "There are so many different kinds of\n"
	.string "TM moves.\p"
	.string "A catalog I read said there are fifty\n"
	.string "different kinds.$"

LilycoveCity_DepartmentStore_4F_Text_PokemonOnlyHaveFourMoves:
	.string "I'd like to get all the different TMs,\n"
	.string "but a POKéMON learns only four moves.$"

