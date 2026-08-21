.class public Lcom/mbridge/msdk/e/b;
.super Ljava/lang/Object;
.source "TimerController.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/e/b$a;
    }
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/e/b$1;)V
    .locals 0

    .line 11
    invoke-direct {p0}, Lcom/mbridge/msdk/e/b;-><init>()V

    return-void
.end method

.method public static getInstance()Lcom/mbridge/msdk/e/b;
    .locals 1

    .line 21
    sget-object v0, Lcom/mbridge/msdk/e/b$a;->a:Lcom/mbridge/msdk/e/b;

    return-object v0
.end method


# virtual methods
.method public addInterstitialList(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 2075
    sget-object v0, Lcom/mbridge/msdk/e/a$a;->a:Lcom/mbridge/msdk/e/a;

    .line 31
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/e/a;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public addRewardList(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 1075
    sget-object v0, Lcom/mbridge/msdk/e/a$a;->a:Lcom/mbridge/msdk/e/a;

    .line 25
    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/e/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public start()V
    .locals 4

    .line 37
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-nez v0, :cond_0

    .line 39
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    .line 41
    :cond_0
    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->q()I

    move-result v0

    if-lez v0, :cond_1

    .line 3075
    sget-object v1, Lcom/mbridge/msdk/e/a$a;->a:Lcom/mbridge/msdk/e/a;

    mul-int/lit16 v0, v0, 0x3e8

    int-to-long v2, v0

    .line 43
    invoke-virtual {v1, v2, v3}, Lcom/mbridge/msdk/e/a;->a(J)V

    :cond_1
    return-void
.end method
