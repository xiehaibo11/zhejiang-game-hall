.class public abstract enum Lcom/sigmob/sdk/base/common/af;
.super Ljava/lang/Enum;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Enum<",
        "Lcom/sigmob/sdk/base/common/af;",
        ">;"
    }
.end annotation


# static fields
.field public static final enum a:Lcom/sigmob/sdk/base/common/af;

.field public static final enum b:Lcom/sigmob/sdk/base/common/af;

.field public static final enum c:Lcom/sigmob/sdk/base/common/af;

.field public static final enum d:Lcom/sigmob/sdk/base/common/af;

.field public static final enum e:Lcom/sigmob/sdk/base/common/af;

.field public static final enum f:Lcom/sigmob/sdk/base/common/af;

.field public static final enum g:Lcom/sigmob/sdk/base/common/af;

.field private static final synthetic i:[Lcom/sigmob/sdk/base/common/af;


# instance fields
.field private final h:Z


# direct methods
.method static constructor <clinit>()V
    .locals 10

    new-instance v0, Lcom/sigmob/sdk/base/common/af$1;

    const/4 v1, 0x0

    const-string v2, "IGNORE_ABOUT_SCHEME"

    invoke-direct {v0, v2, v1, v1}, Lcom/sigmob/sdk/base/common/af$1;-><init>(Ljava/lang/String;IZ)V

    sput-object v0, Lcom/sigmob/sdk/base/common/af;->a:Lcom/sigmob/sdk/base/common/af;

    new-instance v0, Lcom/sigmob/sdk/base/common/af$2;

    const/4 v2, 0x1

    const-string v3, "MINI_PROGRAM"

    invoke-direct {v0, v3, v2, v1}, Lcom/sigmob/sdk/base/common/af$2;-><init>(Ljava/lang/String;IZ)V

    sput-object v0, Lcom/sigmob/sdk/base/common/af;->b:Lcom/sigmob/sdk/base/common/af;

    new-instance v0, Lcom/sigmob/sdk/base/common/af$3;

    const/4 v3, 0x2

    const-string v4, "FOLLOW_DEEP_LINK"

    invoke-direct {v0, v4, v3, v2}, Lcom/sigmob/sdk/base/common/af$3;-><init>(Ljava/lang/String;IZ)V

    sput-object v0, Lcom/sigmob/sdk/base/common/af;->c:Lcom/sigmob/sdk/base/common/af;

    new-instance v0, Lcom/sigmob/sdk/base/common/af$4;

    const/4 v4, 0x3

    const-string v5, "MARKET_SCHEME"

    invoke-direct {v0, v5, v4, v1}, Lcom/sigmob/sdk/base/common/af$4;-><init>(Ljava/lang/String;IZ)V

    sput-object v0, Lcom/sigmob/sdk/base/common/af;->d:Lcom/sigmob/sdk/base/common/af;

    new-instance v0, Lcom/sigmob/sdk/base/common/af$5;

    const/4 v5, 0x4

    const-string v6, "DOWNLOAD_APK"

    invoke-direct {v0, v6, v5, v2}, Lcom/sigmob/sdk/base/common/af$5;-><init>(Ljava/lang/String;IZ)V

    sput-object v0, Lcom/sigmob/sdk/base/common/af;->e:Lcom/sigmob/sdk/base/common/af;

    new-instance v0, Lcom/sigmob/sdk/base/common/af$6;

    const/4 v6, 0x5

    const-string v7, "OPEN_WITH_BROWSER"

    invoke-direct {v0, v7, v6, v2}, Lcom/sigmob/sdk/base/common/af$6;-><init>(Ljava/lang/String;IZ)V

    sput-object v0, Lcom/sigmob/sdk/base/common/af;->f:Lcom/sigmob/sdk/base/common/af;

    new-instance v0, Lcom/sigmob/sdk/base/common/af$7;

    const/4 v7, 0x6

    const-string v8, "NOOP"

    invoke-direct {v0, v8, v7, v1}, Lcom/sigmob/sdk/base/common/af$7;-><init>(Ljava/lang/String;IZ)V

    sput-object v0, Lcom/sigmob/sdk/base/common/af;->g:Lcom/sigmob/sdk/base/common/af;

    const/4 v8, 0x7

    new-array v8, v8, [Lcom/sigmob/sdk/base/common/af;

    sget-object v9, Lcom/sigmob/sdk/base/common/af;->a:Lcom/sigmob/sdk/base/common/af;

    aput-object v9, v8, v1

    sget-object v1, Lcom/sigmob/sdk/base/common/af;->b:Lcom/sigmob/sdk/base/common/af;

    aput-object v1, v8, v2

    sget-object v1, Lcom/sigmob/sdk/base/common/af;->c:Lcom/sigmob/sdk/base/common/af;

    aput-object v1, v8, v3

    sget-object v1, Lcom/sigmob/sdk/base/common/af;->d:Lcom/sigmob/sdk/base/common/af;

    aput-object v1, v8, v4

    sget-object v1, Lcom/sigmob/sdk/base/common/af;->e:Lcom/sigmob/sdk/base/common/af;

    aput-object v1, v8, v5

    sget-object v1, Lcom/sigmob/sdk/base/common/af;->f:Lcom/sigmob/sdk/base/common/af;

    aput-object v1, v8, v6

    aput-object v0, v8, v7

    sput-object v8, Lcom/sigmob/sdk/base/common/af;->i:[Lcom/sigmob/sdk/base/common/af;

    return-void
.end method

.method private constructor <init>(Ljava/lang/String;IZ)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(Z)V"
        }
    .end annotation

    invoke-direct {p0, p1, p2}, Ljava/lang/Enum;-><init>(Ljava/lang/String;I)V

    iput-boolean p3, p0, Lcom/sigmob/sdk/base/common/af;->h:Z

    return-void
.end method

.method synthetic constructor <init>(Ljava/lang/String;IZLcom/sigmob/sdk/base/common/af$1;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/sigmob/sdk/base/common/af;-><init>(Ljava/lang/String;IZ)V

    return-void
.end method

.method public static valueOf(Ljava/lang/String;)Lcom/sigmob/sdk/base/common/af;
    .locals 1

    const-class v0, Lcom/sigmob/sdk/base/common/af;

    invoke-static {v0, p0}, Ljava/lang/Enum;->valueOf(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Enum;

    move-result-object p0

    check-cast p0, Lcom/sigmob/sdk/base/common/af;

    return-object p0
.end method

.method public static values()[Lcom/sigmob/sdk/base/common/af;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/base/common/af;->i:[Lcom/sigmob/sdk/base/common/af;

    invoke-virtual {v0}, [Lcom/sigmob/sdk/base/common/af;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Lcom/sigmob/sdk/base/common/af;

    return-object v0
.end method


# virtual methods
.method public abstract a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Ljava/lang/String;
.end method

.method protected abstract a(Landroid/content/Context;Landroid/net/Uri;Lcom/sigmob/sdk/base/common/ag;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation
.end method

.method public a(Lcom/sigmob/sdk/base/common/ag;Landroid/content/Context;Landroid/net/Uri;ZLcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 2
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/Exception;
        }
    .end annotation

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Ad event URL: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-boolean v0, p0, Lcom/sigmob/sdk/base/common/af;->h:Z

    if-eqz v0, :cond_1

    if-eqz p4, :cond_0

    goto :goto_0

    :cond_0
    new-instance p1, Ljava/lang/Exception;

    const-string p2, "Attempted to handle action without user interaction."

    invoke-direct {p1, p2}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw p1

    :cond_1
    :goto_0
    invoke-virtual {p0, p2, p3, p1, p5}, Lcom/sigmob/sdk/base/common/af;->a(Landroid/content/Context;Landroid/net/Uri;Lcom/sigmob/sdk/base/common/ag;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method

.method public abstract a(Landroid/net/Uri;)Z
.end method
