.class public final enum Lcom/carlt/networklibs/NetType;
.super Ljava/lang/Enum;
.source "NetType.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/carlt/networklibs/NetType;",
        ">;"
    }
.end annotation


# static fields
.field private static final synthetic $VALUES:[Lcom/carlt/networklibs/NetType;

.field public static final enum AUTO:Lcom/carlt/networklibs/NetType;

.field public static final enum CMNET:Lcom/carlt/networklibs/NetType;

.field public static final enum CMWAP:Lcom/carlt/networklibs/NetType;

.field public static final enum NONE:Lcom/carlt/networklibs/NetType;

.field public static final enum WIFI:Lcom/carlt/networklibs/NetType;


# direct methods
.method static constructor <clinit>()V
    .locals 8

    .line 11
    new-instance v0, Lcom/carlt/networklibs/NetType;

    const/4 v1, 0x0

    const-string v2, "AUTO"

    invoke-direct {v0, v2, v1}, Lcom/carlt/networklibs/NetType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/carlt/networklibs/NetType;->AUTO:Lcom/carlt/networklibs/NetType;

    .line 12
    new-instance v0, Lcom/carlt/networklibs/NetType;

    const/4 v2, 0x1

    const-string v3, "WIFI"

    invoke-direct {v0, v3, v2}, Lcom/carlt/networklibs/NetType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/carlt/networklibs/NetType;->WIFI:Lcom/carlt/networklibs/NetType;

    .line 14
    new-instance v0, Lcom/carlt/networklibs/NetType;

    const/4 v3, 0x2

    const-string v4, "CMNET"

    invoke-direct {v0, v4, v3}, Lcom/carlt/networklibs/NetType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/carlt/networklibs/NetType;->CMNET:Lcom/carlt/networklibs/NetType;

    .line 16
    new-instance v0, Lcom/carlt/networklibs/NetType;

    const/4 v4, 0x3

    const-string v5, "CMWAP"

    invoke-direct {v0, v5, v4}, Lcom/carlt/networklibs/NetType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/carlt/networklibs/NetType;->CMWAP:Lcom/carlt/networklibs/NetType;

    .line 18
    new-instance v0, Lcom/carlt/networklibs/NetType;

    const/4 v5, 0x4

    const-string v6, "NONE"

    invoke-direct {v0, v6, v5}, Lcom/carlt/networklibs/NetType;-><init>(Ljava/lang/String;I)V

    sput-object v0, Lcom/carlt/networklibs/NetType;->NONE:Lcom/carlt/networklibs/NetType;

    const/4 v6, 0x5

    new-array v6, v6, [Lcom/carlt/networklibs/NetType;

    .line 9
    sget-object v7, Lcom/carlt/networklibs/NetType;->AUTO:Lcom/carlt/networklibs/NetType;

    aput-object v7, v6, v1

    sget-object v1, Lcom/carlt/networklibs/NetType;->WIFI:Lcom/carlt/networklibs/NetType;

    aput-object v1, v6, v2

    sget-object v1, Lcom/carlt/networklibs/NetType;->CMNET:Lcom/carlt/networklibs/NetType;

    aput-object v1, v6, v3

    sget-object v1, Lcom/carlt/networklibs/NetType;->CMWAP:Lcom/carlt/networklibs/NetType;

    aput-object v1, v6, v4

    aput-object v0, v6, v5

    sput-object v6, Lcom/carlt/networklibs/NetType;->$VALUES:[Lcom/carlt/networklibs/NetType;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;I)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()V"
        }
    .end annotation

    .line 9
    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/carlt/networklibs/NetType;
    .locals 1

    .line 9
    const-class v0, Lcom/carlt/networklibs/NetType;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/carlt/networklibs/NetType;

    return-object p0
.end method

.method public static values()[Lcom/carlt/networklibs/NetType;
    .locals 1

    .line 9
    sget-object v0, Lcom/carlt/networklibs/NetType;->$VALUES:[Lcom/carlt/networklibs/NetType;

    invoke-virtual {v0}, [Lcom/carlt/networklibs/NetType;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/carlt/networklibs/NetType;

    return-object v0
.end method
