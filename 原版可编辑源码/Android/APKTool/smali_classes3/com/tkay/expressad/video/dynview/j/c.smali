.class public final Lcom/tkay/expressad/video/dynview/j/c;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String; = "ViewOptionWrapper"

.field private static final b:Ljava/lang/String; = "\\.xml"

.field private static final c:Ljava/lang/String; = "\\/xml"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;I)Lcom/tkay/expressad/video/dynview/c;
    .locals 4

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 222
    :cond_0
    :try_start_0
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/k;->b(Landroid/content/Context;)I

    move-result v1

    const/4 v2, 0x1

    if-ne v1, v2, :cond_1

    const-string v1, "tkay_reward_end_card_layout_portrait"

    goto :goto_0

    :cond_1
    const-string v1, "tkay_reward_end_card_layout_landscape"

    :goto_0
    const-string v2, ""

    .line 4192
    new-instance v3, Lcom/tkay/expressad/video/dynview/c$a;

    invoke-direct {v3}, Lcom/tkay/expressad/video/dynview/c$a;-><init>()V

    .line 237
    invoke-virtual {v3, v1}, Lcom/tkay/expressad/video/dynview/c$a;->a(Ljava/lang/String;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object v1

    const/4 v3, 0x4

    .line 238
    invoke-interface {v1, v3}, Lcom/tkay/expressad/video/dynview/c$b;->a(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object v1

    .line 239
    invoke-interface {v1, p0}, Lcom/tkay/expressad/video/dynview/c$b;->a(Landroid/content/Context;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object v1

    .line 240
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/k;->b(Landroid/content/Context;)I

    move-result p0

    invoke-interface {v1, p0}, Lcom/tkay/expressad/video/dynview/c$b;->b(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 241
    invoke-interface {p0, v2}, Lcom/tkay/expressad/video/dynview/c$b;->b(Ljava/lang/String;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 242
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result p1

    invoke-interface {p0, p1}, Lcom/tkay/expressad/video/dynview/c$b;->e(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 243
    invoke-interface {p0, p2}, Lcom/tkay/expressad/video/dynview/c$b;->d(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 244
    invoke-interface {p0}, Lcom/tkay/expressad/video/dynview/c$b;->a()Lcom/tkay/expressad/video/dynview/c;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 247
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-object v0
.end method

.method public static a(Landroid/content/Context;Ljava/util/List;)Lcom/tkay/expressad/video/dynview/c;
    .locals 9
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)",
            "Lcom/tkay/expressad/video/dynview/c;"
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 57
    :cond_0
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->f(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    .line 58
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/t;->e(Landroid/content/Context;)I

    move-result v2

    int-to-float v2, v2

    const-string v3, ""

    .line 63
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v4

    const/4 v5, 0x1

    if-lez v4, :cond_2

    const/4 v4, 0x0

    invoke-interface {p1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    if-eqz v6, :cond_2

    .line 64
    invoke-interface {p1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/tkay/expressad/foundation/d/c;

    if-eqz v6, :cond_1

    .line 1082
    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v7

    if-eqz v7, :cond_1

    .line 1083
    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v6

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c$c;->c()I

    move-result v6

    goto :goto_0

    :cond_1
    move v6, v5

    .line 65
    :goto_0
    invoke-interface {p1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v7}, Lcom/tkay/expressad/foundation/d/c;->as()I

    .line 66
    invoke-interface {p1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->aq()Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :cond_2
    move v6, v5

    :goto_1
    const-string v4, "tkay_same_choice_one_layout_landscape"

    const-string v7, "tkay_same_choice_one_layout_portrait"

    const/4 v8, 0x2

    if-eq v6, v5, :cond_4

    if-eq v6, v8, :cond_5

    .line 80
    :try_start_1
    invoke-static {p0}, Lcom/tkay/expressad/video/dynview/i/c;->a(Landroid/content/Context;)Z

    move-result v6

    if-eqz v6, :cond_3

    move v6, v8

    goto :goto_2

    :cond_3
    move v6, v5

    :cond_4
    move-object v4, v7

    .line 1192
    :cond_5
    :goto_2
    new-instance v7, Lcom/tkay/expressad/video/dynview/c$a;

    invoke-direct {v7}, Lcom/tkay/expressad/video/dynview/c$a;-><init>()V

    .line 91
    invoke-virtual {v7, p0}, Lcom/tkay/expressad/video/dynview/c$a;->a(Landroid/content/Context;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 92
    invoke-interface {p0, v4}, Lcom/tkay/expressad/video/dynview/c$b;->a(Ljava/lang/String;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 93
    invoke-interface {p0, v5}, Lcom/tkay/expressad/video/dynview/c$b;->a(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 94
    invoke-interface {p0, v2}, Lcom/tkay/expressad/video/dynview/c$b;->a(F)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 95
    invoke-interface {p0, v1}, Lcom/tkay/expressad/video/dynview/c$b;->b(F)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 96
    invoke-interface {p0, p1}, Lcom/tkay/expressad/video/dynview/c$b;->a(Ljava/util/List;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 97
    invoke-interface {p0, v6}, Lcom/tkay/expressad/video/dynview/c$b;->b(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 98
    invoke-interface {p0, v3}, Lcom/tkay/expressad/video/dynview/c$b;->b(Ljava/lang/String;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 99
    invoke-interface {p0}, Lcom/tkay/expressad/video/dynview/c$b;->a()Lcom/tkay/expressad/video/dynview/c;

    move-result-object p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 102
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-object v0
.end method

.method public static a(Landroid/view/View;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/video/dynview/c;
    .locals 9

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    :cond_0
    const/16 v1, 0x66

    const/4 v2, 0x0

    const-string v3, ""

    if-eqz p1, :cond_2

    .line 127
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v4

    .line 128
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v5

    if-eqz v5, :cond_1

    .line 129
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/c$c;->b()I

    move-result v1

    .line 130
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->M()Lcom/tkay/expressad/foundation/d/c$c;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c$c;->e()Ljava/lang/String;

    move-result-object v5

    goto :goto_0

    :cond_1
    move-object v5, v3

    .line 132
    :goto_0
    invoke-static {v1}, Lcom/tkay/expressad/video/dynview/j/c;->a(I)Ljava/lang/String;

    move-result-object v6

    .line 133
    invoke-static {v5}, Lcom/tkay/expressad/video/dynview/i/c;->a(Ljava/lang/String;)Z

    move-result v5

    goto :goto_1

    :cond_2
    move v5, v2

    move-object v4, v3

    move-object v6, v4

    .line 136
    :goto_1
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v7

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v8

    invoke-virtual {v8}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v7, v8, v4, v2}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v4

    if-eqz v4, :cond_3

    .line 138
    invoke-virtual {v4}, Lcom/tkay/expressad/videocommon/e/d;->h()I

    move-result v2

    .line 144
    :cond_3
    new-instance v4, Ljava/util/ArrayList;

    invoke-direct {v4}, Ljava/util/ArrayList;-><init>()V

    .line 145
    invoke-interface {v4, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 2192
    new-instance v7, Lcom/tkay/expressad/video/dynview/c$a;

    invoke-direct {v7}, Lcom/tkay/expressad/video/dynview/c$a;-><init>()V

    .line 147
    invoke-virtual {v7, v6}, Lcom/tkay/expressad/video/dynview/c$a;->a(Ljava/lang/String;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object v6

    .line 148
    invoke-interface {v6, v1}, Lcom/tkay/expressad/video/dynview/c$b;->a(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object v6

    .line 149
    invoke-interface {v6, v4}, Lcom/tkay/expressad/video/dynview/c$b;->a(Ljava/util/List;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object v4

    .line 150
    invoke-virtual {p0}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v6

    invoke-interface {v4, v6}, Lcom/tkay/expressad/video/dynview/c$b;->a(Landroid/content/Context;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object v4

    .line 151
    invoke-interface {v4, p0}, Lcom/tkay/expressad/video/dynview/c$b;->a(Landroid/view/View;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object v4

    .line 152
    invoke-interface {v4, v2}, Lcom/tkay/expressad/video/dynview/c$b;->c(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object v2

    .line 153
    invoke-virtual {p0}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/k;->b(Landroid/content/Context;)I

    move-result p0

    invoke-interface {v2, p0}, Lcom/tkay/expressad/video/dynview/c$b;->b(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 154
    invoke-interface {p0, v1}, Lcom/tkay/expressad/video/dynview/c$b;->d(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 155
    invoke-interface {p0, v5}, Lcom/tkay/expressad/video/dynview/c$b;->a(Z)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 156
    invoke-interface {p0, v3}, Lcom/tkay/expressad/video/dynview/c$b;->b(Ljava/lang/String;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 157
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result p1

    invoke-interface {p0, p1}, Lcom/tkay/expressad/video/dynview/c$b;->e(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 158
    invoke-interface {p0}, Lcom/tkay/expressad/video/dynview/c$b;->a()Lcom/tkay/expressad/video/dynview/c;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 161
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-object v0
.end method

.method private static a(I)Ljava/lang/String;
    .locals 1

    const/4 v0, 0x3

    if-eq p0, v0, :cond_3

    const/16 v0, 0x12e

    if-eq p0, v0, :cond_2

    const/16 v0, 0x322

    if-eq p0, v0, :cond_1

    const/16 v0, 0x388

    if-eq p0, v0, :cond_0

    const-string p0, "tkay_reward_layer_floor"

    goto :goto_0

    :cond_0
    const-string p0, "tkay_reward_layer_floor_904"

    goto :goto_0

    :cond_1
    const-string p0, "tkay_reward_layer_floor_802"

    goto :goto_0

    :cond_2
    const-string p0, "tkay_reward_layer_floor_302"

    goto :goto_0

    :cond_3
    const-string p0, "tkay_reward_layer_floor_bottom"

    :goto_0
    return-object p0
.end method

.method public static b(Landroid/content/Context;Ljava/util/List;)Lcom/tkay/expressad/video/dynview/c;
    .locals 8
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/d/c;",
            ">;)",
            "Lcom/tkay/expressad/video/dynview/c;"
        }
    .end annotation

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    .line 264
    :cond_0
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    if-nez v1, :cond_1

    return-object v0

    .line 268
    :cond_1
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/expressad/foundation/h/t;->f(Landroid/content/Context;)I

    move-result v1

    int-to-float v1, v1

    .line 269
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/h/t;->e(Landroid/content/Context;)I

    move-result v2

    int-to-float v2, v2

    const-string v3, ""

    const/4 v4, 0x0

    .line 274
    invoke-interface {p1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    if-eqz v5, :cond_2

    .line 275
    invoke-interface {p1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/d/c;->k()I

    move-result v5

    .line 276
    invoke-interface {p1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v6}, Lcom/tkay/expressad/foundation/d/c;->as()I

    .line 277
    invoke-interface {p1, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/d/c;->aq()Ljava/lang/String;

    move v4, v5

    .line 283
    :cond_2
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/k;->b(Landroid/content/Context;)I

    move-result v5

    const/4 v6, 0x1

    if-ne v5, v6, :cond_3

    const-string v6, "tkay_order_layout_list_portrait"

    goto :goto_0

    :cond_3
    const-string v6, "tkay_order_layout_list_landscape"

    .line 5192
    :goto_0
    new-instance v7, Lcom/tkay/expressad/video/dynview/c$a;

    invoke-direct {v7}, Lcom/tkay/expressad/video/dynview/c$a;-><init>()V

    .line 286
    invoke-virtual {v7, v6}, Lcom/tkay/expressad/video/dynview/c$a;->a(Ljava/lang/String;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object v6

    const/4 v7, 0x5

    .line 287
    invoke-interface {v6, v7}, Lcom/tkay/expressad/video/dynview/c$b;->a(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object v6

    .line 288
    invoke-interface {v6, p0}, Lcom/tkay/expressad/video/dynview/c$b;->a(Landroid/content/Context;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 289
    invoke-interface {p0, v2}, Lcom/tkay/expressad/video/dynview/c$b;->a(F)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 290
    invoke-interface {p0, v1}, Lcom/tkay/expressad/video/dynview/c$b;->b(F)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 291
    invoke-interface {p0, p1}, Lcom/tkay/expressad/video/dynview/c$b;->a(Ljava/util/List;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 292
    invoke-interface {p0, v5}, Lcom/tkay/expressad/video/dynview/c$b;->b(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 293
    invoke-interface {p0, v3}, Lcom/tkay/expressad/video/dynview/c$b;->b(Ljava/lang/String;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 294
    invoke-interface {p0, v4}, Lcom/tkay/expressad/video/dynview/c$b;->e(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 295
    invoke-interface {p0, v4}, Lcom/tkay/expressad/video/dynview/c$b;->d(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 296
    invoke-interface {p0}, Lcom/tkay/expressad/video/dynview/c$b;->a()Lcom/tkay/expressad/video/dynview/c;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 299
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-object v0
.end method

.method public static b(Landroid/view/View;Lcom/tkay/expressad/foundation/d/c;)Lcom/tkay/expressad/video/dynview/c;
    .locals 7

    const/4 v0, 0x0

    if-nez p1, :cond_0

    return-object v0

    :cond_0
    const-string v1, ""

    const/4 v2, 0x3

    if-eqz p1, :cond_1

    .line 182
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v1

    .line 183
    invoke-static {v2}, Lcom/tkay/expressad/video/dynview/j/c;->a(I)Ljava/lang/String;

    move-result-object v3

    goto :goto_0

    :cond_1
    move-object v3, v1

    .line 186
    :goto_0
    invoke-static {}, Lcom/tkay/expressad/videocommon/e/c;->a()Lcom/tkay/expressad/videocommon/e/c;

    move-result-object v4

    invoke-static {}, Lcom/tkay/expressad/foundation/b/b;->b()Lcom/tkay/expressad/foundation/b/b;

    move-result-object v5

    invoke-virtual {v5}, Lcom/tkay/expressad/foundation/b/b;->e()Ljava/lang/String;

    move-result-object v5

    const/4 v6, 0x0

    invoke-virtual {v4, v5, v1, v6}, Lcom/tkay/expressad/videocommon/e/c;->a(Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/videocommon/e/d;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 188
    invoke-virtual {v1}, Lcom/tkay/expressad/videocommon/e/d;->h()I

    move-result v6

    .line 190
    :cond_2
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 191
    invoke-interface {v1, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 3192
    new-instance p1, Lcom/tkay/expressad/video/dynview/c$a;

    invoke-direct {p1}, Lcom/tkay/expressad/video/dynview/c$a;-><init>()V

    .line 193
    invoke-virtual {p1, v3}, Lcom/tkay/expressad/video/dynview/c$a;->a(Ljava/lang/String;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p1

    .line 194
    invoke-interface {p1, v2}, Lcom/tkay/expressad/video/dynview/c$b;->a(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p1

    .line 195
    invoke-interface {p1, v1}, Lcom/tkay/expressad/video/dynview/c$b;->a(Ljava/util/List;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p1

    .line 196
    invoke-virtual {p0}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-interface {p1, v1}, Lcom/tkay/expressad/video/dynview/c$b;->a(Landroid/content/Context;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p1

    .line 197
    invoke-interface {p1, p0}, Lcom/tkay/expressad/video/dynview/c$b;->a(Landroid/view/View;)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p1

    .line 198
    invoke-interface {p1, v6}, Lcom/tkay/expressad/video/dynview/c$b;->c(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p1

    .line 199
    invoke-virtual {p0}, Landroid/view/View;->getContext()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/k;->b(Landroid/content/Context;)I

    move-result p0

    invoke-interface {p1, p0}, Lcom/tkay/expressad/video/dynview/c$b;->b(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 200
    invoke-interface {p0, v2}, Lcom/tkay/expressad/video/dynview/c$b;->d(I)Lcom/tkay/expressad/video/dynview/c$b;

    move-result-object p0

    .line 201
    invoke-interface {p0}, Lcom/tkay/expressad/video/dynview/c$b;->a()Lcom/tkay/expressad/video/dynview/c;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 204
    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    return-object v0
.end method
