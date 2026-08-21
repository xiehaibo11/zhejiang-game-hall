.class public Lcom/qq/e/comm/managers/GDTAdSdk;
.super Ljava/lang/Object;
.source ""


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getGDTAdManger()Lcom/qq/e/comm/managers/IGDTAdManager;
    .locals 1

    invoke-static {}, Lcom/qq/e/comm/managers/b;->b()Lcom/qq/e/comm/managers/b;

    move-result-object v0

    return-object v0
.end method

.method public static init(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    invoke-static {}, Lcom/qq/e/comm/managers/b;->b()Lcom/qq/e/comm/managers/b;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/qq/e/comm/managers/b;->a(Landroid/content/Context;Ljava/lang/String;)Z

    return-void
.end method
