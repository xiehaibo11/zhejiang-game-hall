.class public final enum Lnet/grandcentrix/tray/core/TrayStorage$a;
.super Ljava/lang/Enum;
.source "TrayStorage.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lnet/grandcentrix/tray/core/TrayStorage;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x4019
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lnet/grandcentrix/tray/core/TrayStorage$a;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lnet/grandcentrix/tray/core/TrayStorage$a;

.field public static final enum b:Lnet/grandcentrix/tray/core/TrayStorage$a;

.field public static final enum c:Lnet/grandcentrix/tray/core/TrayStorage$a;

.field private static final synthetic d:[Lnet/grandcentrix/tray/core/TrayStorage$a;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    .line 45
    new-instance v0, Lnet/grandcentrix/tray/core/TrayStorage$a;

    const/4 v1, 0x0

    const-string v2, "UNDEFINED"

    invoke-direct {v0, v2, v1}, Lnet/grandcentrix/tray/core/TrayStorage$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lnet/grandcentrix/tray/core/TrayStorage$a;->a:Lnet/grandcentrix/tray/core/TrayStorage$a;

    .line 50
    new-instance v0, Lnet/grandcentrix/tray/core/TrayStorage$a;

    const/4 v2, 0x1

    const-string v3, "USER"

    invoke-direct {v0, v3, v2}, Lnet/grandcentrix/tray/core/TrayStorage$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lnet/grandcentrix/tray/core/TrayStorage$a;->b:Lnet/grandcentrix/tray/core/TrayStorage$a;

    .line 57
    new-instance v0, Lnet/grandcentrix/tray/core/TrayStorage$a;

    const/4 v3, 0x2

    const-string v4, "DEVICE"

    invoke-direct {v0, v4, v3}, Lnet/grandcentrix/tray/core/TrayStorage$a;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lnet/grandcentrix/tray/core/TrayStorage$a;->c:Lnet/grandcentrix/tray/core/TrayStorage$a;

    .line 35
    const/4 v0, 0x3

    new-array v0, v0, [Lnet/grandcentrix/tray/core/TrayStorage$a;

    sget-object v4, Lnet/grandcentrix/tray/core/TrayStorage$a;->a:Lnet/grandcentrix/tray/core/TrayStorage$a;

    aput-object v4, v0, v1

    sget-object v1, Lnet/grandcentrix/tray/core/TrayStorage$a;->b:Lnet/grandcentrix/tray/core/TrayStorage$a;

    aput-object v1, v0, v2

    sget-object v1, Lnet/grandcentrix/tray/core/TrayStorage$a;->c:Lnet/grandcentrix/tray/core/TrayStorage$a;

    aput-object v1, v0, v3

    sput-object v0, Lnet/grandcentrix/tray/core/TrayStorage$a;->d:[Lnet/grandcentrix/tray/core/TrayStorage$a;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 35
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lnet/grandcentrix/tray/core/TrayStorage$a;
    .locals 1
    .param p0, "name"    # Ljava/lang/String;

    .line 35
    const-class v0, Lnet/grandcentrix/tray/core/TrayStorage$a;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object v0

    check-cast v0, Lnet/grandcentrix/tray/core/TrayStorage$a;

    return-object v0
.end method

.method public static values()[Lnet/grandcentrix/tray/core/TrayStorage$a;
    .locals 1

    .line 35
    sget-object v0, Lnet/grandcentrix/tray/core/TrayStorage$a;->d:[Lnet/grandcentrix/tray/core/TrayStorage$a;

    invoke-virtual {v0}, [Lnet/grandcentrix/tray/core/TrayStorage$a;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lnet/grandcentrix/tray/core/TrayStorage$a;

    return-object v0
.end method
