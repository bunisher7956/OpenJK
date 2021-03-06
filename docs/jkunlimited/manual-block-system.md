The saber combat system implemented in this mod has been rewritten to introduce a realistich approach to manual blocking.

The manual blocking implementation serves the purpose of steering away from the traditional hack-and-slash oriented gameplay.

This implementation uses the networked kButtons (no. 15) as well as the playerState entry called userInt1, both of which are made available through OpenJK.

This implementation consists of code written by the authors of this project within the following 2 files:
1. w_saber.c 
    1.1 Overall logic to determine blocking success/failures depending on a wide array of conditions, i.e. viewangles/cone-blocking, perfect-blocking etc. 
	1.2 Handles all the consequences and repercussions of any blocking attempts made, successful or failed, i.e. force-power subtraction, penalties, animations etc. 
2. g_active.c 
    2.1 Conditional checking on every frame update to determine server-side if players are able to block.
	2.2 Sets and networks the userInt1 value if applicable in the given scenario.

This implementation is one of the key elements of the mod and as such is expected to be iterated on, revised and adjusted as the mod naturally undergoes development. 
	