# What is this?
A plugin for the Unreal Engine that allows Gameplay Effects of the Gameplay Ability System (GAS) to cancel Gameplay Abilities.
Important note: I have no idea how replication in GAS works and didn't test it with this new feature, so be warned that this _might_ break it :)

# Requirements
You need Unreal Engine 5.3 as a minimum, since this plugins adds a new Gameplay Effect Component, a concept that didn't exist prior to this version.

# How to use
Create a new Gameplay Effect, add the "CancelAbilityTagsEffectComponent". Configure abilities with what tags and without what tags should be cancelled.

![grafik](https://github.com/gregorhcs/GASCancelAbilitiesFromEffect/assets/42077794/c8e7d927-7da3-4da0-884d-a7492ad181d5)

Mind that these tags must be present in the to-be-cancelled Abilities "Ability Tags":

![grafik](https://github.com/gregorhcs/GASCancelAbilitiesFromEffect/assets/42077794/4a5d41e2-fd11-46de-9d96-9444ec7622a6)
