.class public final enum Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;
.super Ljava/lang/Enum;
.source "AssetsUtils.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/replugin/utils/AssetsUtils;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "QuickExtractResult"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

.field public static final enum EXISTED:Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

.field public static final enum FAIL:Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

.field public static final enum SUCCESS:Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;


# direct methods
.method static constructor <clinit>()V
    .locals 6

    .line 156
    new-instance v0, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    const/4 v1, 0x0

    const-string v2, "SUCCESS"

    invoke-direct {v0, v2, v1}, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;->SUCCESS:Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    .line 157
    new-instance v0, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    const/4 v2, 0x1

    const-string v3, "FAIL"

    invoke-direct {v0, v3, v2}, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;->FAIL:Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    .line 158
    new-instance v0, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    const/4 v3, 0x2

    const-string v4, "EXISTED"

    invoke-direct {v0, v4, v3}, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;->EXISTED:Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    const/4 v4, 0x3

    new-array v4, v4, [Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    .line 155
    sget-object v5, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;->SUCCESS:Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    aput-object v5, v4, v1

    sget-object v1, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;->FAIL:Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    aput-object v1, v4, v2

    aput-object v0, v4, v3

    sput-object v4, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;->$VALUES:[Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 155
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;
    .locals 1

    .line 155
    const-class v0, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    return-object p0
.end method

.method public static values()[Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;
    .locals 1

    .line 155
    sget-object v0, Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;->$VALUES:[Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    invoke-virtual {v0}, [Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/qihoo360/replugin/utils/AssetsUtils$QuickExtractResult;

    return-object v0
.end method
