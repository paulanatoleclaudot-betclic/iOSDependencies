// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "BetclicDependencies",
    products: [
        .library(
            name: "TCCore",
            targets: [
                "TCCore"
            ]
        ),
        .library(
            name: "TCIAB",
            targets: [
                "TCIAB"
            ]
        ),
        .library(
            name: "TCPrivacy",
            targets: [
                "TCPrivacy"
            ]
        ),
        .library(
            name: "TCSDK",
            targets: [
                "TCSDK"
            ]
        ),
        .library(
            name: "ServiceCore",
            targets: [
                "ServiceCore"
            ]
        ),
        .library(
            name: "ServiceChat",
            targets: [
                "ServiceChat"
            ]
        )
    ],
    targets: [
        .binaryTarget(
            name: "TCCore",
            path: "./XCFrameworks/TCCore.xcframework"
        ),
        .binaryTarget(
            name: "TCIAB",
            path: "./XCFrameworks/TCIAB.xcframework"
        ),
        .binaryTarget(
            name: "TCPrivacy",
            path: "./XCFrameworks/TCPrivacy.xcframework"
        ),
        .binaryTarget(
            name: "TCSDK",
            path: "./XCFrameworks/TCSDK.xcframework"
        ),
        .binaryTarget(
            name: "ServiceCore",
            path: "./XCFrameworks/ServiceCore.xcframework"
        ),
        .binaryTarget(
            name: "ServiceChat",
            path: "./XCFrameworks/ServiceChat.xcframework"
        )
    ]
)
