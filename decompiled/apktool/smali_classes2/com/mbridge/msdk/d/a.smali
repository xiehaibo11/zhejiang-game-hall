.class public final Lcom/mbridge/msdk/d/a;
.super Ljava/lang/Object;
.source "ShortCutsDataManager.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/d/a$a;
    }
.end annotation


# static fields
.field public static a:I = 0x3

.field public static b:I = 0x1

.field public static c:I = 0x4

.field public static d:I = 0x5

.field private static e:Ljava/lang/String; = "ShortCutsDataManager"


# instance fields
.field private f:Lcom/mbridge/msdk/click/b;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 46
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/mbridge/msdk/d/a$1;)V
    .locals 0

    .line 36
    invoke-direct {p0}, Lcom/mbridge/msdk/d/a;-><init>()V

    return-void
.end method

.method public static a()Lcom/mbridge/msdk/d/a;
    .locals 1

    .line 51
    invoke-static {}, Lcom/mbridge/msdk/d/a$a;->a()Lcom/mbridge/msdk/d/a;

    move-result-object v0

    return-object v0
.end method

.method static synthetic a(Lcom/mbridge/msdk/d/a;Landroid/content/Context;Ljava/util/List;)Ljava/util/List;
    .locals 6

    .line 1154
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    .line 1155
    :goto_0
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_3

    .line 1156
    invoke-interface {p2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    if-eqz v2, :cond_2

    .line 1160
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-static {p1, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v3

    .line 1161
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getWtick()I

    move-result v4

    const/4 v5, 0x1

    if-eq v4, v5, :cond_0

    if-nez v3, :cond_2

    .line 1162
    :cond_0
    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    if-eqz v2, :cond_2

    .line 2131
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result v3

    const/4 v4, 0x3

    if-ne v3, v4, :cond_2

    .line 2135
    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getJmPd()I

    move-result v3

    if-eqz v3, :cond_2

    const/4 v4, 0x2

    if-eq v3, v5, :cond_1

    .line 2144
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/v;->D(Landroid/content/Context;)I

    move-result v3

    const/16 v5, 0x9

    if-ne v3, v5, :cond_2

    .line 2145
    invoke-direct {p0, p1, v2, v4}, Lcom/mbridge/msdk/d/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    goto :goto_1

    .line 2139
    :cond_1
    invoke-direct {p0, p1, v2, v4}, Lcom/mbridge/msdk/d/a;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V

    :cond_2
    :goto_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_3
    return-object v0
.end method

.method private a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;I)V
    .locals 2

    .line 183
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->k()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/c/b;->b(Ljava/lang/String;)Lcom/mbridge/msdk/c/a;

    move-result-object v0

    if-nez v0, :cond_0

    .line 185
    invoke-static {}, Lcom/mbridge/msdk/c/b;->a()Lcom/mbridge/msdk/c/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b;->b()Lcom/mbridge/msdk/c/a;

    move-result-object v0

    .line 187
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/d/a;->f:Lcom/mbridge/msdk/click/b;

    if-nez v1, :cond_1

    .line 188
    new-instance v1, Lcom/mbridge/msdk/click/b;

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/a;->D()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, p1, v0}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/mbridge/msdk/d/a;->f:Lcom/mbridge/msdk/click/b;

    :cond_1
    const/4 p1, 0x1

    if-ne p3, p1, :cond_2

    .line 191
    iget-object p1, p0, Lcom/mbridge/msdk/d/a;->f:Lcom/mbridge/msdk/click/b;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/click/b;->c(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    goto :goto_0

    :cond_2
    const/4 p1, 0x2

    if-ne p3, p1, :cond_3

    .line 193
    iget-object p1, p0, Lcom/mbridge/msdk/d/a;->f:Lcom/mbridge/msdk/click/b;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V

    :cond_3
    :goto_0
    return-void
.end method
