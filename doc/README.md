Expositio Core
=============

Setup
---------------------
Expositio Core is the original Expositio client and it builds the backbone of the network. It downloads and, by default, stores the entire history of Expositio transactions, which requires a few hundred gigabytes of disk space. Depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

To download Expositio Core, visit [expositiocore.org](https://expositiocore.org/en/download/).

Running
---------------------
The following are some helpful notes on how to run Expositio Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/expositio-qt` (GUI) or
- `bin/expositiod` (headless)

### Windows

Unpack the files into a directory, and then run expositio-qt.exe.

### macOS

Drag Expositio Core to your applications folder, and then run Expositio Core.

### Need Help?

* See the documentation at the [Expositio Wiki](https://en.expositio.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#expositio](https://webchat.freenode.net/#expositio) on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#expositio).
* Ask for help on the [ExpositioTalk](https://expositiotalk.org/) forums, in the [Technical Support board](https://expositiotalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build Expositio Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [Dependencies](dependencies.md)
- [macOS Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Windows Build Notes](build-windows.md)
- [FreeBSD Build Notes](build-freebsd.md)
- [OpenBSD Build Notes](build-openbsd.md)
- [NetBSD Build Notes](build-netbsd.md)
- [Gitian Building Guide (External Link)](https://github.com/expositio-core/docs/blob/master/gitian-building.md)

Development
---------------------
The Expositio repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Productivity Notes](productivity.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://doxygen.expositiocore.org/)
- [Translation Process](translation_process.md)
- [Translation Strings Policy](translation_strings_policy.md)
- [JSON-RPC Interface](JSON-RPC-interface.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Shared Libraries](shared-libraries.md)
- [BIPS](bips.md)
- [Dnsseed Policy](dnsseed-policy.md)
- [Benchmarking](benchmarking.md)

### Resources
* Discuss on the [ExpositioTalk](https://expositiotalk.org/) forums, in the [Development & Technical Discussion board](https://expositiotalk.org/index.php?board=6.0).
* Discuss project-specific development on #expositio-core-dev on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#expositio-core-dev).
* Discuss general Expositio development on #expositio-dev on Freenode. If you don't have an IRC client, use [webchat here](https://webchat.freenode.net/#expositio-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [expositio.conf Configuration File](expositio-conf.md)
- [Files](files.md)
- [Fuzz-testing](fuzzing.md)
- [Reduce Memory](reduce-memory.md)
- [Reduce Traffic](reduce-traffic.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)
- [ZMQ](zmq.md)
- [PSBT support](psbt.md)

License
---------------------
Distributed under the [MIT software license](/COPYING).
