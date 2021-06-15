// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "BetclicDependencies",
    platforms: [
        .iOS(.v12)
    ],
    products: [
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
            name: "ServiceCore",
            path: "./XCFrameworks/ServiceCore.xcframework"
        ),
        .binaryTarget(
            name: "ServiceChat",
            path: "./XCFrameworks/ServiceChat.xcframework"
        )
    ]
)
