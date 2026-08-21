.class public final Lcom/tkay/expressad/exoplayer/d/d$d;
.super Ljava/lang/Exception;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/exoplayer/d/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "d"
.end annotation


# direct methods
.method private constructor <init>(Ljava/util/UUID;)V
    .locals 1

    .line 64
    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "Media does not support uuid: "

    invoke-virtual {v0, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    return-void
.end method

.method synthetic constructor <init>(Ljava/util/UUID;B)V
    .locals 0

    .line 61
    invoke-direct {p0, p1}, Lcom/tkay/expressad/exoplayer/d/d$d;-><init>(Ljava/util/UUID;)V

    return-void
.end method
