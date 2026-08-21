.class public final Lcom/mbridge/msdk/widget/custom/a/b;
.super Ljava/lang/Object;
.source "MBResource.java"


# static fields
.field private static g:Lcom/mbridge/msdk/widget/custom/a/b;


# instance fields
.field private a:Ljava/lang/ref/SoftReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/SoftReference<",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/widget/custom/a/c;",
            ">;>;"
        }
    .end annotation
.end field

.field private b:Ljava/lang/ref/SoftReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/SoftReference<",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;>;"
        }
    .end annotation
.end field

.field private c:Ljava/lang/ref/SoftReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/SoftReference<",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/widget/custom/a/c;",
            ">;>;"
        }
    .end annotation
.end field

.field private d:Ljava/lang/String;

.field private e:Ljava/lang/String;

.field private f:Landroid/content/Context;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()Lcom/mbridge/msdk/widget/custom/a/b;
    .locals 1

    .line 37
    sget-object v0, Lcom/mbridge/msdk/widget/custom/a/b;->g:Lcom/mbridge/msdk/widget/custom/a/b;

    if-nez v0, :cond_0

    .line 38
    new-instance v0, Lcom/mbridge/msdk/widget/custom/a/b;

    invoke-direct {v0}, Lcom/mbridge/msdk/widget/custom/a/b;-><init>()V

    sput-object v0, Lcom/mbridge/msdk/widget/custom/a/b;->g:Lcom/mbridge/msdk/widget/custom/a/b;

    .line 40
    :cond_0
    sget-object v0, Lcom/mbridge/msdk/widget/custom/a/b;->g:Lcom/mbridge/msdk/widget/custom/a/b;

    return-object v0
.end method

.method private d()Ljava/util/HashMap;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    const/4 v0, 0x0

    .line 226
    :try_start_0
    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/a/b;->f:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getAssets()Landroid/content/res/AssetManager;

    move-result-object v1

    const-string v2, "strings.xml"

    invoke-virtual {v1, v2}, Landroid/content/res/AssetManager;->open(Ljava/lang/String;)Ljava/io/InputStream;

    move-result-object v1
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v1

    .line 229
    invoke-virtual {v1}, Ljava/io/IOException;->printStackTrace()V

    move-object v1, v0

    .line 231
    :goto_0
    invoke-static {}, Landroid/util/Xml;->newPullParser()Lorg/xmlpull/v1/XmlPullParser;

    move-result-object v2

    :try_start_1
    const-string v3, "utf-8"

    .line 233
    invoke-interface {v2, v1, v3}, Lorg/xmlpull/v1/XmlPullParser;->setInput(Ljava/io/InputStream;Ljava/lang/String;)V

    .line 234
    new-instance v1, Ljava/util/HashMap;

    invoke-direct {v1}, Ljava/util/HashMap;-><init>()V

    .line 235
    invoke-interface {v2}, Lorg/xmlpull/v1/XmlPullParser;->getEventType()I

    move-result v3

    :goto_1
    const/4 v4, 0x1

    if-eq v3, v4, :cond_1

    const/4 v4, 0x2

    if-ne v3, v4, :cond_0

    const-string v3, "string"

    .line 238
    invoke-interface {v2}, Lorg/xmlpull/v1/XmlPullParser;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    const/4 v3, 0x0

    .line 239
    invoke-interface {v2, v3}, Lorg/xmlpull/v1/XmlPullParser;->getAttributeValue(I)Ljava/lang/String;

    move-result-object v3

    .line 240
    invoke-interface {v2}, Lorg/xmlpull/v1/XmlPullParser;->nextText()Ljava/lang/String;

    move-result-object v4

    .line 241
    invoke-virtual {v1, v3, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 236
    :cond_0
    invoke-interface {v2}, Lorg/xmlpull/v1/XmlPullParser;->next()I

    move-result v3
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :cond_1
    return-object v1

    :catch_1
    move-exception v1

    .line 247
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    return-object v0
.end method


# virtual methods
.method public final a(Landroid/content/Context;Ljava/lang/String;)I
    .locals 3

    .line 189
    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    .line 190
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 191
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, ".R$"

    .line 192
    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p1, "\\."

    .line 194
    invoke-virtual {p2, p1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    const/4 p2, 0x1

    .line 195
    aget-object v1, p1, p2

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 197
    :try_start_0
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 198
    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v1

    const/4 v2, 0x2

    .line 200
    aget-object p1, p1, v2

    invoke-virtual {v0, p1}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object p1

    .line 201
    invoke-virtual {p1, p2}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 202
    invoke-virtual {p1, v1}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 204
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 48
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/a/b;->f:Landroid/content/Context;

    .line 49
    sget-boolean v0, Lcom/mbridge/msdk/widget/custom/b/d;->a:Z

    if-eqz v0, :cond_0

    .line 50
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/b;->f:Landroid/content/Context;

    invoke-virtual {p1}, Landroid/content/Context;->getFilesDir()Ljava/io/File;

    move-result-object p1

    invoke-virtual {p1}, Ljava/io/File;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/b;->d:Ljava/lang/String;

    goto :goto_0

    .line 52
    :cond_0
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/b;->d:Ljava/lang/String;

    .line 54
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/b;->f:Landroid/content/Context;

    invoke-static {p1}, Lcom/mbridge/msdk/widget/custom/b/a;->a(Landroid/content/Context;)Landroid/util/DisplayMetrics;

    const-string p1, "/drawable/"

    .line 55
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/b;->e:Ljava/lang/String;

    .line 56
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "\u5c4f\u5e55\uff1a"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/a/b;->e:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/mbridge/msdk/widget/custom/b/d;->a(Ljava/lang/String;)V

    .line 57
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/b;->f:Landroid/content/Context;

    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/b;->f:Landroid/content/Context;

    return-void
.end method

.method public final b(Ljava/lang/String;)I
    .locals 3

    .line 135
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    const-string v0, "#"

    .line 136
    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 137
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v1

    const/4 v2, 0x7

    if-ne v1, v2, :cond_0

    const-string v1, "#FF"

    .line 139
    invoke-virtual {p1, v0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Ljava/lang/Long;->decode(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    long-to-int p1, v0

    return p1

    :cond_0
    const/16 v0, 0x9

    if-ne v1, v0, :cond_1

    .line 143
    invoke-static {p1}, Ljava/lang/Long;->decode(Ljava/lang/String;)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    long-to-int p1, v0

    return p1

    :cond_1
    const-string p1, "\u8fd4\u56de\u767d\u8272\u80cc\u666f"

    .line 147
    invoke-static {p1}, Lcom/mbridge/msdk/widget/custom/b/d;->a(Ljava/lang/String;)V

    const/4 p1, -0x1

    return p1

    :cond_2
    const/high16 p1, -0x1000000

    return p1
.end method

.method public final b()Ljava/util/HashMap;
    .locals 5

    .line 61
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/a/b;->a:Ljava/lang/ref/SoftReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-nez v0, :cond_1

    .line 62
    :cond_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 63
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->b:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "layout_width"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 64
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->c:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "layout_height"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 65
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->d:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "orientation"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 66
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->e:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "layout_centerHorizontal"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 68
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->f:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "layout_centerVertical"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 69
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->k:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "layout_marginLeft"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 70
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->l:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v3, "layout_marginRight"

    invoke-virtual {v0, v3, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 71
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->p:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v4, "layout_margin"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 72
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->q:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v4, "layout_gravity"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 73
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->r:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v4, "layout_alignParentRight"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 75
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->v:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v4, "layout_weight"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 76
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->P:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v4, "contentDescription"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 77
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->N:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v4, "gravity"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 78
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->a:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v4, "id"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 79
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->g:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v4, "layout_below"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 80
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->h:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v4, "layout_above"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 81
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->j:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v4, "layout_toLeftOf"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 82
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->i:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v4, "layout_toRightOf"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 83
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->J:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v4, "background"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 84
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->m:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v4, "layout_marginTop"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 85
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->n:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v4, "layout_marginBottom"

    invoke-virtual {v0, v4, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 86
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->k:Lcom/mbridge/msdk/widget/custom/a/c;

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 87
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->l:Lcom/mbridge/msdk/widget/custom/a/c;

    invoke-virtual {v0, v3, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 88
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->t:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "layout_alignParentBottom"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 89
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->u:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "layout_alignParentTop"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 90
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->s:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "layout_alignParentLeft"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 91
    new-instance v1, Ljava/lang/ref/SoftReference;

    invoke-direct {v1, v0}, Ljava/lang/ref/SoftReference;-><init>(Ljava/lang/Object;)V

    iput-object v1, p0, Lcom/mbridge/msdk/widget/custom/a/b;->a:Ljava/lang/ref/SoftReference;

    .line 93
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/a/b;->a:Ljava/lang/ref/SoftReference;

    invoke-virtual {v0}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    return-object v0
.end method

.method public final c(Ljava/lang/String;)I
    .locals 4

    .line 158
    :try_start_0
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return p1

    :catch_0
    const-string v0, "d"

    .line 161
    invoke-virtual {p1, v0}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v1

    const-string v2, "s"

    .line 162
    invoke-virtual {p1, v2}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    const/4 v3, -0x1

    if-eq v1, v3, :cond_0

    goto :goto_0

    :cond_0
    move v1, v2

    :goto_0
    const/4 v2, 0x0

    .line 164
    invoke-virtual {p1, v2, v1}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    .line 165
    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 166
    iget-object p1, p0, Lcom/mbridge/msdk/widget/custom/a/b;->f:Landroid/content/Context;

    invoke-static {p1, v1}, Lcom/mbridge/msdk/widget/custom/b/a;->a(Landroid/content/Context;I)I

    move-result p1

    return p1

    :cond_1
    return v1
.end method

.method public final c()Ljava/util/HashMap;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/mbridge/msdk/widget/custom/a/c;",
            ">;"
        }
    .end annotation

    .line 97
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/a/b;->c:Ljava/lang/ref/SoftReference;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-nez v0, :cond_1

    .line 98
    :cond_0
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 99
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->a:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "id"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 100
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->B:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "text"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 101
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->C:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "ellipsize"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 102
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->D:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "fadingEdge"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 103
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->E:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "scrollHorizontally"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 104
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->F:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "textColor"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 105
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->G:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "textSize"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 106
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->I:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "visibility"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 107
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->J:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "background"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 108
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->K:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v3, "textStyle"

    invoke-virtual {v0, v3, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 109
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->L:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v3, "style"

    invoke-virtual {v0, v3, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 110
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->b:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v3, "layout_width"

    invoke-virtual {v0, v3, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 111
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->c:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v3, "layout_height"

    invoke-virtual {v0, v3, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 112
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->g:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v3, "layout_below"

    invoke-virtual {v0, v3, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 113
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->P:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v3, "contentDescription"

    invoke-virtual {v0, v3, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 114
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->M:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v3, "src"

    invoke-virtual {v0, v3, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 115
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->N:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v3, "gravity"

    invoke-virtual {v0, v3, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 116
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->d:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v3, "orientation"

    invoke-virtual {v0, v3, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 117
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->O:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v3, "numColumns"

    invoke-virtual {v0, v3, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 118
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->z:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v3, "verticalSpacing"

    invoke-virtual {v0, v3, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 119
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->A:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v3, "horizontalSpacing"

    invoke-virtual {v0, v3, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 120
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->J:Lcom/mbridge/msdk/widget/custom/a/c;

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 121
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->n:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "layout_marginBottom"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 122
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->Q:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "scaleType"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 123
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->H:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "singleLine"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 124
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->R:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "paddingBottom"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 125
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->S:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "paddingTop"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 126
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->T:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "letterSpacing"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 127
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->U:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "paddingRight"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 128
    sget-object v1, Lcom/mbridge/msdk/widget/custom/a/c;->V:Lcom/mbridge/msdk/widget/custom/a/c;

    const-string v2, "layout_right"

    invoke-virtual {v0, v2, v1}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 129
    new-instance v1, Ljava/lang/ref/SoftReference;

    invoke-direct {v1, v0}, Ljava/lang/ref/SoftReference;-><init>(Ljava/lang/Object;)V

    iput-object v1, p0, Lcom/mbridge/msdk/widget/custom/a/b;->c:Ljava/lang/ref/SoftReference;

    .line 131
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/a/b;->c:Ljava/lang/ref/SoftReference;

    invoke-virtual {v0}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    return-object v0
.end method

.method public final d(Ljava/lang/String;)I
    .locals 5

    .line 174
    invoke-virtual {p1}, Ljava/lang/String;->toUpperCase()Ljava/lang/String;

    move-result-object p1

    const-string v0, "\\|"

    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object p1

    const/16 v0, 0x30

    :try_start_0
    const-string v1, "android.view.Gravity"

    .line 177
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const/4 v2, 0x0

    .line 178
    :goto_0
    array-length v3, p1

    if-ge v2, v3, :cond_0

    .line 179
    aget-object v3, p1, v2

    invoke-virtual {v1, v3}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v3

    const/4 v4, 0x0

    .line 180
    invoke-virtual {v3, v4}, Ljava/lang/reflect/Field;->getInt(Ljava/lang/Object;)I

    move-result v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    or-int/2addr v0, v3

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :catch_0
    move-exception p1

    .line 183
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    return v0
.end method

.method public final e(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    const-string v0, "@"

    .line 211
    invoke-virtual {p1, v0}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    return-object p1

    .line 214
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/a/b;->b:Ljava/lang/ref/SoftReference;

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v0

    if-nez v0, :cond_2

    :cond_1
    const-string v0, "\u5b57\u7b26\u4e32\u53d8\u7a7a\u4e86"

    .line 215
    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/b/d;->a(Ljava/lang/String;)V

    .line 216
    new-instance v0, Ljava/lang/ref/SoftReference;

    .line 217
    invoke-direct {p0}, Lcom/mbridge/msdk/widget/custom/a/b;->d()Ljava/util/HashMap;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/ref/SoftReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/mbridge/msdk/widget/custom/a/b;->b:Ljava/lang/ref/SoftReference;

    :cond_2
    const/16 v0, 0x8

    .line 219
    invoke-virtual {p1, v0}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    .line 220
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/a/b;->b:Ljava/lang/ref/SoftReference;

    invoke-virtual {v0}, Ljava/lang/ref/SoftReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    return-object p1
.end method

.method public final f(Ljava/lang/String;)Landroid/view/View;
    .locals 3

    .line 253
    new-instance v0, Lcom/mbridge/msdk/widget/custom/a/a;

    iget-object v1, p0, Lcom/mbridge/msdk/widget/custom/a/b;->f:Landroid/content/Context;

    invoke-direct {v0, v1}, Lcom/mbridge/msdk/widget/custom/a/a;-><init>(Landroid/content/Context;)V

    const/4 v1, 0x0

    .line 1111
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/widget/custom/a/a;->a(Ljava/lang/String;)Lorg/xmlpull/v1/XmlPullParser;

    move-result-object p1

    const/4 v2, 0x0

    .line 1112
    invoke-virtual {v0, p1, v2, v1}, Lcom/mbridge/msdk/widget/custom/a/a;->a(Lorg/xmlpull/v1/XmlPullParser;Landroid/view/ViewGroup;Z)Landroid/view/View;

    move-result-object p1

    return-object p1
.end method
