.class public Lcom/mbridge/msdk/video/dynview/i/a/a;
.super Ljava/lang/Object;
.source "ChoiceOneDrawBitBg.java"


# static fields
.field private static volatile a:Lcom/mbridge/msdk/video/dynview/i/a/a;


# instance fields
.field private b:Landroid/view/View;

.field private c:Landroid/graphics/Bitmap;

.field private d:Landroid/graphics/Bitmap;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/mbridge/msdk/video/dynview/i/a/a;
    .locals 2

    .line 26
    sget-object v0, Lcom/mbridge/msdk/video/dynview/i/a/a;->a:Lcom/mbridge/msdk/video/dynview/i/a/a;

    if-nez v0, :cond_1

    .line 27
    const-class v0, Lcom/mbridge/msdk/video/dynview/i/a/a;

    monitor-enter v0

    .line 28
    :try_start_0
    sget-object v1, Lcom/mbridge/msdk/video/dynview/i/a/a;->a:Lcom/mbridge/msdk/video/dynview/i/a/a;

    if-nez v1, :cond_0

    .line 29
    new-instance v1, Lcom/mbridge/msdk/video/dynview/i/a/a;

    invoke-direct {v1}, Lcom/mbridge/msdk/video/dynview/i/a/a;-><init>()V

    sput-object v1, Lcom/mbridge/msdk/video/dynview/i/a/a;->a:Lcom/mbridge/msdk/video/dynview/i/a/a;

    .line 31
    :cond_0
    sget-object v1, Lcom/mbridge/msdk/video/dynview/i/a/a;->a:Lcom/mbridge/msdk/video/dynview/i/a/a;

    monitor-exit v0

    return-object v1

    :catchall_0
    move-exception v1

    .line 32
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 34
    :cond_1
    sget-object v0, Lcom/mbridge/msdk/video/dynview/i/a/a;->a:Lcom/mbridge/msdk/video/dynview/i/a/a;

    return-object v0
.end method

.method private declared-synchronized a(IFFLandroid/graphics/Bitmap;Landroid/graphics/Bitmap;)V
    .locals 2

    monitor-enter p0

    .line 89
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/g/a;->a()Lcom/mbridge/msdk/video/dynview/g/a$a;

    move-result-object v0

    .line 90
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/video/dynview/g/a$a;->a(I)Lcom/mbridge/msdk/video/dynview/g/a$b;

    move-result-object v1

    .line 91
    invoke-interface {v1, p4}, Lcom/mbridge/msdk/video/dynview/g/a$b;->a(Landroid/graphics/Bitmap;)Lcom/mbridge/msdk/video/dynview/g/a$b;

    move-result-object p4

    .line 92
    invoke-interface {p4, p5}, Lcom/mbridge/msdk/video/dynview/g/a$b;->b(Landroid/graphics/Bitmap;)Lcom/mbridge/msdk/video/dynview/g/a$b;

    const/4 p4, 0x2

    if-ne p1, p4, :cond_1

    cmpl-float p1, p2, p3

    if-lez p1, :cond_0

    .line 95
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/video/dynview/g/a$a;->a(F)Lcom/mbridge/msdk/video/dynview/g/a$b;

    move-result-object p1

    .line 96
    invoke-interface {p1, p3}, Lcom/mbridge/msdk/video/dynview/g/a$b;->b(F)Lcom/mbridge/msdk/video/dynview/g/a$b;

    goto :goto_0

    .line 98
    :cond_0
    invoke-virtual {v0, p3}, Lcom/mbridge/msdk/video/dynview/g/a$a;->a(F)Lcom/mbridge/msdk/video/dynview/g/a$b;

    move-result-object p1

    .line 99
    invoke-interface {p1, p2}, Lcom/mbridge/msdk/video/dynview/g/a$b;->b(F)Lcom/mbridge/msdk/video/dynview/g/a$b;

    goto :goto_0

    .line 102
    :cond_1
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/video/dynview/g/a$a;->a(F)Lcom/mbridge/msdk/video/dynview/g/a$b;

    move-result-object p1

    .line 103
    invoke-interface {p1, p3}, Lcom/mbridge/msdk/video/dynview/g/a$b;->b(F)Lcom/mbridge/msdk/video/dynview/g/a$b;

    .line 106
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->b:Landroid/view/View;

    invoke-virtual {v0}, Lcom/mbridge/msdk/video/dynview/g/a$a;->a()Lcom/mbridge/msdk/video/dynview/g/a;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/view/View;->setBackground(Landroid/graphics/drawable/Drawable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 107
    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1
.end method


# virtual methods
.method public final a(Ljava/util/Map;Lcom/mbridge/msdk/video/dynview/c;Landroid/view/View;)V
    .locals 6

    .line 49
    iput-object p3, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->b:Landroid/view/View;

    .line 50
    invoke-virtual {p2}, Lcom/mbridge/msdk/video/dynview/c;->e()I

    move-result v1

    .line 51
    invoke-virtual {p2}, Lcom/mbridge/msdk/video/dynview/c;->d()F

    move-result v2

    .line 52
    invoke-virtual {p2}, Lcom/mbridge/msdk/video/dynview/c;->c()F

    move-result v3

    if-eqz p1, :cond_1

    .line 53
    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result p3

    const/4 v0, 0x1

    if-le p3, v0, :cond_1

    .line 54
    invoke-virtual {p2}, Lcom/mbridge/msdk/video/dynview/c;->g()Ljava/util/List;

    move-result-object p2

    if-eqz p2, :cond_1

    .line 55
    invoke-interface {p2}, Ljava/util/List;->size()I

    move-result p3

    if-le p3, v0, :cond_1

    const/4 p3, 0x0

    .line 57
    invoke-interface {p2, p3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {p1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    if-eqz v4, :cond_0

    .line 58
    invoke-interface {p2, p3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {p1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    instance-of v4, v4, Landroid/graphics/Bitmap;

    if-eqz v4, :cond_0

    .line 59
    invoke-interface {p2, p3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-interface {p1, v4}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/graphics/Bitmap;

    .line 60
    invoke-interface {p2, p3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    if-eqz v5, :cond_0

    if-eqz v4, :cond_0

    invoke-virtual {v4}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v5

    if-nez v5, :cond_0

    .line 61
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/i/a;->a()Lcom/mbridge/msdk/video/dynview/i/a;

    move-result-object v5

    invoke-virtual {v5, v4, p3}, Lcom/mbridge/msdk/video/dynview/i/a;->a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;

    move-result-object p3

    iput-object p3, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->c:Landroid/graphics/Bitmap;

    .line 64
    :cond_0
    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    invoke-interface {p1, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    if-eqz p3, :cond_1

    .line 65
    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    invoke-interface {p1, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p3

    instance-of p3, p3, Landroid/graphics/Bitmap;

    if-eqz p3, :cond_1

    .line 66
    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p3

    check-cast p3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getImageUrl()Ljava/lang/String;

    move-result-object p3

    invoke-static {p3}, Lcom/mbridge/msdk/foundation/tools/SameMD5;->getMD5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    invoke-interface {p1, p3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/graphics/Bitmap;

    .line 67
    invoke-interface {p2, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p2

    if-eqz p2, :cond_1

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p2

    if-nez p2, :cond_1

    .line 68
    invoke-static {}, Lcom/mbridge/msdk/video/dynview/i/a;->a()Lcom/mbridge/msdk/video/dynview/i/a;

    move-result-object p2

    invoke-virtual {p2, p1, v0}, Lcom/mbridge/msdk/video/dynview/i/a;->a(Landroid/graphics/Bitmap;I)Landroid/graphics/Bitmap;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->d:Landroid/graphics/Bitmap;

    .line 73
    :cond_1
    iget-object p1, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->c:Landroid/graphics/Bitmap;

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p1

    if-nez p1, :cond_2

    iget-object p1, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->d:Landroid/graphics/Bitmap;

    if-eqz p1, :cond_2

    invoke-virtual {p1}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result p1

    if-nez p1, :cond_2

    .line 74
    iget-object v4, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->c:Landroid/graphics/Bitmap;

    iget-object v5, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->d:Landroid/graphics/Bitmap;

    move-object v0, p0

    invoke-direct/range {v0 .. v5}, Lcom/mbridge/msdk/video/dynview/i/a/a;->a(IFFLandroid/graphics/Bitmap;Landroid/graphics/Bitmap;)V

    :cond_2
    return-void
.end method

.method public final b()V
    .locals 2

    .line 114
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->b:Landroid/view/View;

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    .line 115
    iput-object v1, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->b:Landroid/view/View;

    .line 117
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->c:Landroid/graphics/Bitmap;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_1

    .line 118
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->c:Landroid/graphics/Bitmap;

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->recycle()V

    .line 119
    iput-object v1, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->c:Landroid/graphics/Bitmap;

    .line 122
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->d:Landroid/graphics/Bitmap;

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->isRecycled()Z

    move-result v0

    if-nez v0, :cond_2

    .line 123
    iget-object v0, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->d:Landroid/graphics/Bitmap;

    invoke-virtual {v0}, Landroid/graphics/Bitmap;->recycle()V

    .line 124
    iput-object v1, p0, Lcom/mbridge/msdk/video/dynview/i/a/a;->d:Landroid/graphics/Bitmap;

    :cond_2
    return-void
.end method
