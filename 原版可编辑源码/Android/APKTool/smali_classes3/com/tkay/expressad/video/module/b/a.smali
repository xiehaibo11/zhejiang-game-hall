.class public final Lcom/tkay/expressad/video/module/b/a;
.super Ljava/lang/Object;


# static fields
.field public static a:Ljava/util/HashMap; = null
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/util/ArrayList<",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field

.field private static final b:Ljava/lang/String; = "VideoViewReport"


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 28
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/video/module/b/a;->a:Ljava/util/HashMap;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 24
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/f/h/b;)Ljava/lang/String;
    .locals 3

    .line 296
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/f/h/b;->a()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p1

    .line 297
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "?"

    .line 298
    invoke-virtual {p0, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "&"

    invoke-virtual {p0, v1}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 299
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_0

    move-object v0, v1

    :cond_0
    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    .line 301
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_2
    const-string p0, ""

    :goto_0
    return-object p0
.end method

.method public static a()V
    .locals 0

    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 92
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->o()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 95
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/n;->o()[Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {p0, p1, v0, v1, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;II)V
    .locals 7

    .line 130
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->p()[Ljava/lang/String;

    move-result-object v0

    if-eqz p1, :cond_4

    .line 131
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v1

    if-eqz v1, :cond_4

    if-eqz v0, :cond_4

    .line 132
    array-length v1, v0

    .line 133
    new-array v1, v1, [Ljava/lang/String;

    const/4 v2, 0x0

    .line 134
    :goto_0
    array-length v3, v0

    const/4 v4, 0x1

    if-ge v2, v3, :cond_3

    .line 135
    aget-object v3, v0, v2

    .line 136
    new-instance v5, Lorg/json/JSONObject;

    invoke-direct {v5}, Lorg/json/JSONObject;-><init>()V

    const-string v6, "endscreen_type"

    .line 137
    invoke-virtual {v5, v6, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 138
    invoke-virtual {v5}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v5

    .line 139
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_0

    .line 140
    invoke-static {v5}, Lcom/tkay/expressad/foundation/h/j;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 142
    :cond_0
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-nez v6, :cond_1

    .line 143
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "&value="

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v5}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v6, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 145
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->n()I

    move-result v5
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v6, "&tmorl="

    if-ne v5, v4, :cond_2

    .line 146
    :try_start_1
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "&to=1&cbt="

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->az()I

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    goto :goto_1

    .line 148
    :cond_2
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "&to=0&cbt="

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->az()I

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 150
    :goto_1
    aput-object v3, v1, v2

    add-int/lit8 v2, v2, 0x1

    goto/16 :goto_0

    .line 155
    :cond_3
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object p2

    invoke-static {p0, p1, p2, v1, v4}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_4
    return-void
.end method

.method public static a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;III)V
    .locals 8

    if-eqz p3, :cond_4

    if-eqz p0, :cond_4

    if-nez p1, :cond_0

    goto/16 :goto_3

    .line 181
    :cond_0
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->i()Ljava/util/List;

    move-result-object v0

    const/4 v1, 0x1

    add-int/2addr p2, v1

    mul-int/lit8 p2, p2, 0x64

    .line 182
    div-int/2addr p2, p3

    if-eqz v0, :cond_4

    const/4 p3, 0x0

    move v2, p3

    .line 184
    :goto_0
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_4

    .line 185
    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map;

    if-eqz v3, :cond_3

    .line 186
    invoke-interface {v3}, Ljava/util/Map;->size()I

    move-result v4

    if-lez v4, :cond_3

    .line 187
    invoke-interface {v3}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v3

    invoke-interface {v3}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v3

    .line 188
    :cond_1
    :goto_1
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_3

    .line 189
    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    .line 190
    invoke-interface {v4}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/Integer;

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    .line 191
    invoke-interface {v4}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    .line 193
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->n()I

    move-result v6
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v7, "&tmorl="

    if-ne v6, v1, :cond_2

    .line 194
    :try_start_1
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "&to=1&cbt="

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->az()I

    move-result v4

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    goto :goto_2

    .line 196
    :cond_2
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "&to=0&cbt="

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->az()I

    move-result v4

    invoke-virtual {v6, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, p4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    :goto_2
    if-gt v5, p2, :cond_1

    .line 199
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_1

    new-array v5, v1, [Ljava/lang/String;

    aput-object v4, v5, p3

    .line 203
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v4

    invoke-static {p0, p1, v4, v5, v1}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    .line 204
    invoke-interface {v3}, Ljava/util/Iterator;->remove()V

    .line 205
    invoke-interface {v0, v2}, Ljava/util/List;->remove(I)Ljava/lang/Object;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    add-int/lit8 v2, v2, -0x1

    goto :goto_1

    :cond_3
    add-int/2addr v2, v1

    goto/16 :goto_0

    :catchall_0
    :cond_4
    :goto_3
    return-void
.end method

.method public static a(Lcom/tkay/expressad/foundation/d/c;Lcom/tkay/expressad/videocommon/c/c;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 6

    const-string v0, "&"

    const-string v1, ""

    const-string v2, "?"

    if-eqz p0, :cond_4

    if-eqz p1, :cond_4

    .line 271
    :try_start_0
    new-instance v3, Lcom/tkay/expressad/video/module/c/a;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v4

    invoke-virtual {v4}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v3, v4}, Lcom/tkay/expressad/video/module/c/a;-><init>(Landroid/content/Context;)V

    .line 272
    new-instance v4, Lcom/tkay/expressad/foundation/g/f/h/b;

    invoke-direct {v4}, Lcom/tkay/expressad/foundation/g/f/h/b;-><init>()V

    const-string v5, "user_id"

    .line 273
    invoke-static {p3}, Lcom/tkay/expressad/foundation/h/j;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v4, v5, p3}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p3, "cb_type"

    const-string v5, "1"

    .line 274
    invoke-virtual {v4, p3, v5}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p3, "reward_name"

    .line 275
    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/c/c;->a()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, p3, v5}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p3, "reward_amount"

    .line 276
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/tkay/expressad/videocommon/c/c;->b()I

    move-result p1

    invoke-virtual {v5, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v4, p3, p1}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "unit_id"

    .line 277
    invoke-virtual {v4, p1, p2}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, "click_id"

    .line 278
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->aa()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v4, p1, p2}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 279
    invoke-static {p4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    const-string p1, "extra"

    .line 280
    invoke-virtual {v4, p1, p4}, Lcom/tkay/expressad/foundation/g/f/h/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 282
    :cond_0
    invoke-virtual {v3, v1, v4}, Lcom/tkay/expressad/video/module/c/a;->a(Ljava/lang/String;Lcom/tkay/expressad/foundation/g/f/h/b;)V

    .line 283
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->ak()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "/addReward?"

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 1296
    invoke-virtual {v4}, Lcom/tkay/expressad/foundation/g/f/h/b;->a()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object p2

    .line 1297
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p3

    if-nez p3, :cond_3

    .line 1298
    invoke-virtual {p1, v2}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p3

    if-nez p3, :cond_2

    invoke-virtual {p1, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p3

    if-nez p3, :cond_2

    .line 1299
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    goto :goto_0

    :cond_1
    move-object v0, v2

    :goto_0
    invoke-virtual {p3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    .line 1301
    :cond_2
    new-instance p3, Ljava/lang/StringBuilder;

    invoke-direct {p3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 285
    :cond_3
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object p1

    invoke-virtual {p1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object p1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object p2

    const/4 p3, 0x0

    invoke-static {p1, p0, p2, v1, p3}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p0

    .line 288
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    :cond_4
    :goto_1
    return-void
.end method

.method public static a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V
    .locals 4

    if-eqz p0, :cond_1

    .line 254
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->al()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->al()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 257
    invoke-virtual {p0}, Lcom/tkay/expressad/foundation/d/c;->al()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 258
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    .line 259
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    const/4 v3, 0x0

    invoke-static {v2, p0, p1, v1, v3}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Z)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 264
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-void
.end method

.method public static a(Lcom/tkay/expressad/foundation/d/c;Ljava/util/Map;Ljava/lang/String;I)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/foundation/d/c;",
            "Ljava/util/Map<",
            "Ljava/lang/Integer;",
            "Ljava/lang/String;",
            ">;",
            "Ljava/lang/String;",
            "I)V"
        }
    .end annotation

    if-eqz p0, :cond_1

    if-eqz p1, :cond_1

    .line 229
    :try_start_0
    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result v0

    if-lez v0, :cond_1

    .line 230
    invoke-interface {p1}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    .line 233
    :cond_0
    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 234
    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 235
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Integer;

    .line 236
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 237
    invoke-virtual {v1}, Ljava/lang/Integer;->intValue()I

    move-result v1

    if-ne p3, v1, :cond_0

    .line 238
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 239
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v1, p0, p2, v0, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;Ljava/lang/String;Z)V

    .line 240
    invoke-interface {p1}, Ljava/util/Iterator;->remove()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 248
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    return-void
.end method

.method public static a(Ljava/lang/String;)V
    .locals 1

    .line 31
    sget-object v0, Lcom/tkay/expressad/video/module/b/a;->a:Ljava/util/HashMap;

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method public static b(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 100
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->j()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 101
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/n;->j()[Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {p0, p1, v0, v1, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public static c(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 106
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->k()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 107
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/n;->k()[Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {p0, p1, v0, v1, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public static d(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 163
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->q()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 164
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/n;->q()[Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {p0, p1, v0, v1, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method public static e(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 170
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->m()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 171
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/n;->m()[Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {p0, p1, v0, v1, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method private static f(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 60
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->d()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 63
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/n;->d()[Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x1

    invoke-static {p0, p1, v0, v1, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method private static g(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 68
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->e()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 69
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/n;->e()[Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {p0, p1, v0, v1, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method private static h(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 74
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->f()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 75
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/n;->f()[Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {p0, p1, v0, v1, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method private static i(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 80
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->g()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 81
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/n;->g()[Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {p0, p1, v0, v1, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method private static j(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 3

    if-eqz p1, :cond_0

    .line 86
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->h()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 87
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/expressad/foundation/d/n;->h()[Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {p0, p1, v0, v1, v2}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    :cond_0
    return-void
.end method

.method private static k(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 4

    if-eqz p1, :cond_1

    .line 112
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/n;->l()[Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 113
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v0

    .line 114
    sget-object v1, Lcom/tkay/expressad/video/module/b/a;->a:Ljava/util/HashMap;

    invoke-virtual {v1, v0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/ArrayList;

    if-nez v1, :cond_0

    .line 116
    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    .line 117
    sget-object v2, Lcom/tkay/expressad/video/module/b/a;->a:Ljava/util/HashMap;

    invoke-virtual {v2, v0, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 119
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 122
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->K()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->L()Lcom/tkay/expressad/foundation/d/n;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/expressad/foundation/d/n;->l()[Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x0

    invoke-static {p0, p1, v0, v2, v3}, Lcom/tkay/expressad/a/a;->a(Landroid/content/Context;Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;[Ljava/lang/String;Z)V

    .line 123
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/d/c;->aZ()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    :cond_1
    return-void
.end method
