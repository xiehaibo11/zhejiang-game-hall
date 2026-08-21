.class public final Lcom/mbridge/msdk/rover/c;
.super Ljava/lang/Object;
.source "RoverDoing.java"


# static fields
.field private static b:Ljava/lang/String; = "0"


# instance fields
.field a:Lcom/mbridge/msdk/rover/d;

.field private c:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/rover/e;",
            ">;"
        }
    .end annotation
.end field

.field private d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private e:Landroid/content/Context;

.field private f:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Lcom/mbridge/msdk/rover/RoverCampaignUnit;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;)V
    .locals 6

    .line 121
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 23
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/rover/c;->c:Ljava/util/List;

    .line 26
    new-instance p1, Lcom/mbridge/msdk/rover/c$1;

    invoke-direct {p1, p0}, Lcom/mbridge/msdk/rover/c$1;-><init>(Lcom/mbridge/msdk/rover/c;)V

    iput-object p1, p0, Lcom/mbridge/msdk/rover/c;->a:Lcom/mbridge/msdk/rover/d;

    .line 80
    new-instance p1, Ljava/util/HashMap;

    invoke-direct {p1}, Ljava/util/HashMap;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/rover/c;->f:Ljava/util/Map;

    .line 122
    new-instance v0, Lcom/mbridge/msdk/click/CommonJumpLoader;

    const/4 p1, 0x1

    invoke-direct {v0, p3, p1}, Lcom/mbridge/msdk/click/CommonJumpLoader;-><init>(Landroid/content/Context;Z)V

    .line 123
    iput-object p2, p0, Lcom/mbridge/msdk/rover/c;->d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 124
    iput-object p3, p0, Lcom/mbridge/msdk/rover/c;->e:Landroid/content/Context;

    .line 125
    sget-object v2, Lcom/mbridge/msdk/rover/c;->b:Ljava/lang/String;

    new-instance v4, Lcom/mbridge/msdk/rover/c$3;

    invoke-direct {v4, p0}, Lcom/mbridge/msdk/rover/c$3;-><init>(Lcom/mbridge/msdk/rover/c;)V

    iget-object v5, p0, Lcom/mbridge/msdk/rover/c;->a:Lcom/mbridge/msdk/rover/d;

    const-string v1, "2"

    move-object v3, p2

    invoke-virtual/range {v0 .. v5}, Lcom/mbridge/msdk/click/CommonJumpLoader;->a(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Lcom/mbridge/msdk/click/e;Lcom/mbridge/msdk/rover/d;)V

    return-void
.end method

.method static synthetic a(Lcom/mbridge/msdk/rover/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;
    .locals 0

    .line 20
    iget-object p0, p0, Lcom/mbridge/msdk/rover/c;->d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-object p0
.end method

.method static synthetic a(Lcom/mbridge/msdk/rover/c;Ljava/lang/String;IIILjava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 1083
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/rover/c;->f:Ljava/util/Map;

    if-nez v0, :cond_0

    .line 1084
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/rover/c;->f:Ljava/util/Map;

    .line 1086
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/rover/c;->f:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    goto :goto_1

    .line 1089
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/rover/c;->f:Ljava/util/Map;

    const/4 v1, 0x0

    invoke-interface {v0, p1, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1092
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "data:*/*;charset=utf-8;base64"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_2

    goto :goto_1

    .line 1096
    :cond_2
    new-instance v0, Lcom/mbridge/msdk/rover/e;

    invoke-direct {v0}, Lcom/mbridge/msdk/rover/e;-><init>()V

    .line 1097
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/rover/e;->a(Ljava/lang/String;)V

    .line 1098
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/rover/e;->a(I)V

    .line 1099
    invoke-virtual {v0, p3}, Lcom/mbridge/msdk/rover/e;->b(I)V

    .line 1100
    invoke-virtual {v0, p4}, Lcom/mbridge/msdk/rover/e;->c(I)V

    .line 1102
    invoke-static {p5}, Lcom/mbridge/msdk/foundation/tools/t;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 1103
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/rover/e;->b(Ljava/lang/String;)V

    if-nez p6, :cond_3

    const-string p1, ""

    goto :goto_0

    .line 1106
    :cond_3
    invoke-static {p6}, Lcom/mbridge/msdk/foundation/tools/t;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 1107
    :goto_0
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/rover/e;->c(Ljava/lang/String;)V

    .line 1108
    iget-object p1, p0, Lcom/mbridge/msdk/rover/c;->c:Ljava/util/List;

    if-eqz p1, :cond_4

    .line 1109
    iget-object p0, p0, Lcom/mbridge/msdk/rover/c;->c:Ljava/util/List;

    invoke-interface {p0, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 1111
    :cond_4
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    iput-object p1, p0, Lcom/mbridge/msdk/rover/c;->c:Ljava/util/List;

    .line 1112
    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    move-exception p0

    .line 1116
    sget-boolean p1, Lcom/mbridge/msdk/MBridgeConstans;->DEBUG:Z

    if-eqz p1, :cond_5

    .line 1117
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_5
    :goto_1
    return-void
.end method

.method static synthetic b(Lcom/mbridge/msdk/rover/c;)V
    .locals 4

    .line 2055
    iget-object v0, p0, Lcom/mbridge/msdk/rover/c;->e:Landroid/content/Context;

    if-eqz v0, :cond_1

    .line 2056
    new-instance v0, Lcom/mbridge/msdk/foundation/same/report/d;

    iget-object v1, p0, Lcom/mbridge/msdk/rover/c;->e:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/foundation/same/report/d;-><init>(Landroid/content/Context;)V

    .line 2057
    new-instance v1, Lcom/mbridge/msdk/rover/c$2;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/rover/c$2;-><init>(Lcom/mbridge/msdk/rover/c;)V

    .line 2071
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v2

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v3

    if-eq v2, v3, :cond_0

    .line 2072
    invoke-static {}, Landroid/os/Looper;->prepare()V

    .line 2074
    :cond_0
    iget-object v2, p0, Lcom/mbridge/msdk/rover/c;->d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object p0, p0, Lcom/mbridge/msdk/rover/c;->c:Ljava/util/List;

    invoke-virtual {v0, v2, p0, v1}, Lcom/mbridge/msdk/foundation/same/report/d;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/util/List;Lcom/mbridge/msdk/rover/f;)V

    .line 2075
    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object p0

    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object v0

    if-eq p0, v0, :cond_1

    .line 2076
    invoke-static {}, Landroid/os/Looper;->loop()V

    :cond_1
    return-void
.end method
