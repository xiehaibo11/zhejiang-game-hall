.class public final Lcom/mbridge/msdk/foundation/same/report/c;
.super Ljava/lang/Object;
.source "PlayableReportUtils.java"


# static fields
.field private static a:Landroid/os/Handler;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 24
    new-instance v0, Landroid/os/Handler;

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, v1}, Landroid/os/Handler;-><init>(Landroid/os/Looper;)V

    sput-object v0, Lcom/mbridge/msdk/foundation/same/report/c;->a:Landroid/os/Handler;

    return-void
.end method

.method public static a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 12

    if-eqz p0, :cond_3

    .line 28
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_2

    .line 31
    :cond_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getMraid()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    xor-int/2addr v0, v1

    .line 32
    new-instance v11, Lcom/mbridge/msdk/foundation/entity/p;

    if-eqz v0, :cond_1

    goto :goto_0

    :cond_1
    const/4 v1, 0x3

    :goto_0
    move v4, v1

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getKeyIaRst()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v10

    const-string v3, "2000043"

    const-string v5, "0"

    const-string v6, ""

    move-object v2, v11

    move-object v8, p2

    move-object v9, p1

    invoke-direct/range {v2 .. v10}, Lcom/mbridge/msdk/foundation/entity/p;-><init>(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    .line 33
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v11, p1}, Lcom/mbridge/msdk/foundation/entity/p;->n(Ljava/lang/String;)V

    .line 34
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v11, p1}, Lcom/mbridge/msdk/foundation/entity/p;->k(Ljava/lang/String;)V

    .line 35
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRequestIdNotice()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v11, p1}, Lcom/mbridge/msdk/foundation/entity/p;->l(Ljava/lang/String;)V

    .line 36
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAdSpaceT()I

    move-result p1

    invoke-virtual {v11, p1}, Lcom/mbridge/msdk/foundation/entity/p;->b(I)V

    .line 37
    invoke-virtual {v11, p3}, Lcom/mbridge/msdk/foundation/entity/p;->h(Ljava/lang/String;)V

    .line 38
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result p1

    invoke-virtual {v11, p1}, Lcom/mbridge/msdk/foundation/entity/p;->c(I)V

    .line 39
    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->isMraid()Z

    move-result p0

    if-eqz p0, :cond_2

    sget p0, Lcom/mbridge/msdk/foundation/entity/p;->a:I

    goto :goto_1

    :cond_2
    sget p0, Lcom/mbridge/msdk/foundation/entity/p;->b:I

    :goto_1
    invoke-virtual {v11, p0}, Lcom/mbridge/msdk/foundation/entity/p;->a(I)V

    .line 40
    invoke-static {v11, p2}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Lcom/mbridge/msdk/foundation/entity/p;Ljava/lang/String;)V

    :cond_3
    :goto_2
    return-void
.end method

.method public static a(Lcom/mbridge/msdk/foundation/entity/p;Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    if-eqz p0, :cond_1

    const-string v0, "2000060"

    .line 69
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/p;->o(Ljava/lang/String;)V

    .line 70
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 71
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/p;->c(I)V

    .line 72
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/entity/p;->b(Lcom/mbridge/msdk/foundation/entity/p;)Ljava/lang/String;

    move-result-object p0

    .line 73
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 74
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V

    goto :goto_0

    .line 76
    :cond_0
    invoke-static {p0, p1, p2}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public static a(Lcom/mbridge/msdk/foundation/entity/p;Ljava/lang/String;)V
    .locals 1

    if-eqz p0, :cond_1

    .line 50
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->E()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/p;->b(Ljava/lang/String;)V

    .line 51
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/entity/p;->d(Lcom/mbridge/msdk/foundation/entity/p;)Ljava/lang/String;

    move-result-object p0

    .line 52
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 53
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V

    goto :goto_0

    .line 55
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {p0, v0, p1}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private static a(Ljava/lang/Runnable;)V
    .locals 1

    .line 158
    sget-object v0, Lcom/mbridge/msdk/foundation/same/report/c;->a:Landroid/os/Handler;

    if-eqz v0, :cond_0

    .line 159
    invoke-virtual {v0, p0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_0
    return-void
.end method

.method public static a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V
    .locals 0

    if-eqz p1, :cond_0

    .line 104
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 108
    new-instance p1, Lcom/mbridge/msdk/foundation/same/f/a;

    invoke-direct {p1, p0, p2}, Lcom/mbridge/msdk/foundation/same/f/a;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {p1}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Ljava/lang/Runnable;)V

    :cond_0
    return-void
.end method

.method public static b(Lcom/mbridge/msdk/foundation/entity/p;Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    .line 116
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/entity/p;->g(Lcom/mbridge/msdk/foundation/entity/p;)Ljava/lang/String;

    move-result-object p0

    .line 117
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 118
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V

    goto :goto_0

    .line 120
    :cond_0
    invoke-static {p0, p1, p2}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static b(Lcom/mbridge/msdk/foundation/entity/p;Ljava/lang/String;)V
    .locals 1

    if-eqz p0, :cond_1

    const-string v0, "2000059"

    .line 83
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/p;->o(Ljava/lang/String;)V

    .line 84
    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 85
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/p;->c(I)V

    .line 86
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/v;->E()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/p;->b(Ljava/lang/String;)V

    .line 87
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/entity/p;->c(Lcom/mbridge/msdk/foundation/entity/p;)Ljava/lang/String;

    move-result-object p0

    .line 88
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 89
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V

    goto :goto_0

    .line 91
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {p0, v0, p1}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public static c(Lcom/mbridge/msdk/foundation/entity/p;Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    .line 128
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/entity/p;->h(Lcom/mbridge/msdk/foundation/entity/p;)Ljava/lang/String;

    move-result-object p0

    .line 129
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 130
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V

    goto :goto_0

    .line 132
    :cond_0
    invoke-static {p0, p1, p2}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public static d(Lcom/mbridge/msdk/foundation/entity/p;Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    if-eqz p0, :cond_1

    const-string v0, "2000063"

    .line 145
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/p;->o(Ljava/lang/String;)V

    .line 146
    invoke-virtual {p0, p2}, Lcom/mbridge/msdk/foundation/entity/p;->m(Ljava/lang/String;)V

    .line 147
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/entity/p;->c(I)V

    .line 148
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/entity/p;->a(Lcom/mbridge/msdk/foundation/entity/p;)Ljava/lang/String;

    move-result-object p0

    .line 149
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/report/b;->c()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 150
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/report/b;->a()Lcom/mbridge/msdk/foundation/same/report/b;

    move-result-object p1

    invoke-virtual {p1, p0}, Lcom/mbridge/msdk/foundation/same/report/b;->a(Ljava/lang/String;)V

    goto :goto_0

    .line 152
    :cond_0
    invoke-static {p0, p1, p2}, Lcom/mbridge/msdk/foundation/same/report/c;->a(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
