.class public final Lcom/loc/fe;
.super Lcom/loc/ex;
.source "WifiAgeEstimator.java"


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/loc/ex<",
        "Lcom/loc/eg;",
        ">;"
    }
.end annotation


# direct methods
.method public constructor <init>(Landroid/content/Context;Ljava/lang/String;Landroid/os/Handler;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3}, Lcom/loc/ex;-><init>(Landroid/content/Context;Ljava/lang/String;Landroid/os/Handler;)V

    return-void
.end method

.method private static a(Lcom/loc/eg;)Ljava/lang/String;
    .locals 0

    if-nez p0, :cond_0

    const-string p0, ""

    return-object p0

    :cond_0
    invoke-virtual {p0}, Lcom/loc/eg;->a()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static a(Lcom/loc/eg;J)V
    .locals 0

    if-eqz p0, :cond_0

    iput-wide p1, p0, Lcom/loc/eg;->f:J

    :cond_0
    return-void
.end method

.method private static b(Lcom/loc/eg;)I
    .locals 0

    if-nez p0, :cond_0

    const/16 p0, -0x71

    return p0

    :cond_0
    iget p0, p0, Lcom/loc/eg;->c:I

    return p0
.end method

.method private static c(Lcom/loc/eg;)J
    .locals 2

    if-nez p0, :cond_0

    const-wide/16 v0, 0x0

    return-wide v0

    :cond_0
    iget-wide v0, p0, Lcom/loc/eg;->f:J

    return-wide v0
.end method


# virtual methods
.method final bridge synthetic a(Ljava/lang/Object;J)V
    .locals 0

    check-cast p1, Lcom/loc/eg;

    invoke-static {p1, p2, p3}, Lcom/loc/fe;->a(Lcom/loc/eg;J)V

    return-void
.end method

.method final b()J
    .locals 2

    sget v0, Lcom/loc/eu;->e:I

    int-to-long v0, v0

    return-wide v0
.end method

.method public final synthetic b(Ljava/lang/Object;)Ljava/lang/String;
    .locals 0

    check-cast p1, Lcom/loc/eg;

    invoke-static {p1}, Lcom/loc/fe;->a(Lcom/loc/eg;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method final synthetic c(Ljava/lang/Object;)I
    .locals 0

    check-cast p1, Lcom/loc/eg;

    invoke-static {p1}, Lcom/loc/fe;->b(Lcom/loc/eg;)I

    move-result p1

    return p1
.end method

.method final c()J
    .locals 2

    sget v0, Lcom/loc/eu;->f:I

    int-to-long v0, v0

    return-wide v0
.end method

.method final synthetic d(Ljava/lang/Object;)J
    .locals 2

    check-cast p1, Lcom/loc/eg;

    invoke-static {p1}, Lcom/loc/fe;->c(Lcom/loc/eg;)J

    move-result-wide v0

    return-wide v0
.end method
