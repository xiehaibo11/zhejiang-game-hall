.class public Lcom/sigmob/sdk/mraid2/e;
.super Lcom/sigmob/sdk/mraid2/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/mraid2/e$d;,
        Lcom/sigmob/sdk/mraid2/e$c;,
        Lcom/sigmob/sdk/mraid2/e$b;,
        Lcom/sigmob/sdk/mraid2/e$a;
    }
.end annotation


# static fields
.field private static o:Ljava/lang/String; = "Mraid2Bridge"


# instance fields
.field private final b:Lcom/sigmob/sdk/mraid2/e;

.field private c:Lcom/sigmob/sdk/mraid2/b;

.field private d:Lcom/sigmob/sdk/mraid2/e;

.field private e:Ljava/lang/String;

.field private f:Lcom/sigmob/sdk/mraid2/e$c;

.field private g:Lcom/sigmob/sdk/mraid2/e$b;

.field private h:Lcom/sigmob/sdk/mraid2/e$a;

.field private i:Z

.field private j:Landroid/widget/FrameLayout;

.field private k:Landroid/widget/LinearLayout;

.field private l:Z

.field private m:Lorg/json/JSONObject;

.field private n:Lcom/sigmob/sdk/base/models/BaseAdUnit;

.field private final p:Landroid/webkit/WebViewClient;

.field private q:Lcom/sigmob/sdk/base/common/e;

.field private r:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/mraid2/e;",
            ">;"
        }
    .end annotation
.end field

.field private s:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Lcom/sigmob/sdk/mraid2/k;",
            ">;"
        }
    .end annotation
.end field

.field private final t:Lcom/sigmob/sdk/mraid2/b$b;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/util/List;Landroid/widget/FrameLayout;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;",
            "Landroid/widget/FrameLayout;",
            ")V"
        }
    .end annotation

    const/4 v4, 0x0

    const/4 v5, 0x0

    move-object v0, p0

    move-object v1, p1

    move-object v2, p2

    move-object v3, p3

    invoke-direct/range {v0 .. v5}, Lcom/sigmob/sdk/mraid2/e;-><init>(Landroid/content/Context;Ljava/util/List;Landroid/widget/FrameLayout;Lcom/sigmob/sdk/mraid2/e;Lorg/json/JSONObject;)V

    const/4 p1, 0x0

    invoke-interface {p2, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    iget-object p2, p1, Lcom/sigmob/sdk/base/models/BaseAdUnit;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz p2, :cond_0

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/BaseAdUnit;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p2

    if-eqz p2, :cond_1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p2

    iget-object p2, p2, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz p2, :cond_1

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    goto :goto_0

    :cond_1
    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p2

    if-eqz p2, :cond_2

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p2

    iget-object p2, p2, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz p2, :cond_2

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getMaterial()Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    move-result-object p1

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    goto :goto_0

    :cond_2
    const/4 p1, 0x0

    :goto_0
    if-eqz p1, :cond_6

    iget-object p2, p1, Lcom/sigmob/sdk/base/models/rtb/Template;->type:Ljava/lang/Integer;

    invoke-virtual {p2}, Ljava/lang/Integer;->intValue()I

    move-result p2

    const/4 p3, 0x1

    if-eq p2, p3, :cond_5

    const/4 p3, 0x2

    if-eq p2, p3, :cond_4

    const/4 p3, 0x3

    if-eq p2, p3, :cond_3

    goto :goto_1

    :cond_3
    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/Template;->context:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->utf8()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid2/e;->d(Ljava/lang/String;)V

    goto :goto_1

    :cond_4
    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/Template;->context:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->utf8()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/e;->b(Ljava/lang/String;)V

    goto :goto_1

    :cond_5
    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/Template;->context:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->utf8()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/e;->c(Ljava/lang/String;)V

    :cond_6
    :goto_1
    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Ljava/util/List;Landroid/widget/FrameLayout;Lcom/sigmob/sdk/mraid2/e;Lorg/json/JSONObject;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;",
            "Landroid/widget/FrameLayout;",
            "Lcom/sigmob/sdk/mraid2/e;",
            "Lorg/json/JSONObject;",
            ")V"
        }
    .end annotation

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid2/a;-><init>(Landroid/content/Context;)V

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid2/e;->l:Z

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/sigmob/sdk/mraid2/e;->n:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    new-instance v0, Lcom/sigmob/sdk/mraid2/e$1;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/mraid2/e$1;-><init>(Lcom/sigmob/sdk/mraid2/e;)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid2/e;->p:Landroid/webkit/WebViewClient;

    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid2/e;->r:Ljava/util/HashMap;

    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid2/e;->s:Ljava/util/HashMap;

    new-instance v0, Lcom/sigmob/sdk/mraid2/e$3;

    invoke-direct {v0, p0}, Lcom/sigmob/sdk/mraid2/e$3;-><init>(Lcom/sigmob/sdk/mraid2/e;)V

    iput-object v0, p0, Lcom/sigmob/sdk/mraid2/e;->t:Lcom/sigmob/sdk/mraid2/b$b;

    iput-object p0, p0, Lcom/sigmob/sdk/mraid2/e;->d:Lcom/sigmob/sdk/mraid2/e;

    iput-object p3, p0, Lcom/sigmob/sdk/mraid2/e;->j:Landroid/widget/FrameLayout;

    iput-object p4, p0, Lcom/sigmob/sdk/mraid2/e;->b:Lcom/sigmob/sdk/mraid2/e;

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid2/e;->i:Z

    if-eqz p5, :cond_0

    :try_start_0
    new-instance p3, Lorg/json/JSONObject;

    const-string p4, "args"

    invoke-virtual {p5, p4}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p4

    invoke-direct {p3, p4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    iput-object p3, p0, Lcom/sigmob/sdk/mraid2/e;->m:Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p3

    invoke-virtual {p3}, Lorg/json/JSONException;->printStackTrace()V

    :goto_0
    const-string p3, "uniqueId"

    invoke-virtual {p5, p3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p3

    goto :goto_1

    :cond_0
    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object p3

    invoke-virtual {p3}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object p3

    :goto_1
    iput-object p3, p0, Lcom/sigmob/sdk/mraid2/e;->e:Ljava/lang/String;

    const/4 p3, 0x1

    invoke-virtual {p0, p3}, Lcom/sigmob/sdk/mraid2/e;->a(Z)V

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/e;->setBackgroundColor(I)V

    const/4 p1, 0x2

    :try_start_1
    new-instance p4, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/e;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p5

    new-instance v0, Ljava/lang/String;

    const-string v1, "c2V0SmF2YVNjcmlwdEVuYWJsZWQ="

    invoke-static {v1, p1}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/lang/String;-><init>([B)V

    invoke-direct {p4, p5, v0}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;-><init>(Ljava/lang/Object;Ljava/lang/String;)V

    sget-object p5, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    invoke-static {p3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {p4, p5, v0}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->addParam(Ljava/lang/Class;Ljava/lang/Object;)Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {p4}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->execute()Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_2

    :catch_1
    move-exception p4

    invoke-virtual {p4}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    :try_start_2
    new-instance p4, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/e;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p5

    new-instance v0, Ljava/lang/String;

    const-string v1, "c2V0QWxsb3dGaWxlQWNjZXNz"

    invoke-static {v1, p1}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object p1

    invoke-direct {v0, p1}, Ljava/lang/String;-><init>([B)V

    invoke-direct {p4, p5, v0}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;-><init>(Ljava/lang/Object;Ljava/lang/String;)V

    sget-object p1, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    invoke-static {p3}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p3

    invoke-virtual {p4, p1, p3}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->addParam(Ljava/lang/Class;Ljava/lang/Object;)Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {p4}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->execute()Ljava/lang/Object;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2

    goto :goto_3

    :catch_2
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_3
    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e;->p:Landroid/webkit/WebViewClient;

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/e;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    new-instance p1, Lcom/sigmob/sdk/mraid2/b;

    invoke-direct {p1, p2}, Lcom/sigmob/sdk/mraid2/b;-><init>(Ljava/util/List;)V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/e;->c:Lcom/sigmob/sdk/mraid2/b;

    iget-object p2, p0, Lcom/sigmob/sdk/mraid2/e;->t:Lcom/sigmob/sdk/mraid2/b$b;

    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/mraid2/b;->a(Lcom/sigmob/sdk/mraid2/b$b;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e;->c:Lcom/sigmob/sdk/mraid2/b;

    invoke-virtual {p1, p0}, Lcom/sigmob/sdk/mraid2/b;->a(Lcom/sigmob/sdk/mraid2/e;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/e;Landroid/widget/LinearLayout;)Landroid/widget/LinearLayout;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/e;->k:Landroid/widget/LinearLayout;

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/e;->n:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p0
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/base/models/BaseAdUnit;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/e;->n:Lcom/sigmob/sdk/base/models/BaseAdUnit;

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/e;Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/e;->d:Lcom/sigmob/sdk/mraid2/e;

    return-object p1
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/e;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid2/e;->e(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/mraid2/e;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid2/e;->i:Z

    return p1
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid2/e;)Lorg/json/JSONObject;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/e;->m:Lorg/json/JSONObject;

    return-object p0
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid2/e;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/mraid2/e;->d(Ljava/lang/String;)V

    return-void
.end method

.method static synthetic b(Lcom/sigmob/sdk/mraid2/e;Z)Z
    .locals 0

    iput-boolean p1, p0, Lcom/sigmob/sdk/mraid2/e;->l:Z

    return p1
.end method

.method static synthetic c(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/b;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/e;->c:Lcom/sigmob/sdk/mraid2/b;

    return-object p0
.end method

.method static synthetic d(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/e;->b:Lcom/sigmob/sdk/mraid2/e;

    return-object p0
.end method

.method private d(Ljava/lang/String;)V
    .locals 6

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    new-instance v0, Lcom/sigmob/sdk/mraid2/b$a;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e;->c:Lcom/sigmob/sdk/mraid2/b;

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/mraid2/b$a;-><init>(Lcom/sigmob/sdk/mraid2/b;)V

    const-string v1, "sigandroid"

    invoke-virtual {p0, v0, v1}, Lcom/sigmob/sdk/mraid2/e;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sget-object v1, Lcom/sigmob/sdk/base/utils/b;->c:Ljava/lang/String;

    invoke-static {v1}, Lcom/sigmob/sdk/base/utils/b;->c(Ljava/lang/String;)Ljava/io/File;

    move-result-object v1

    new-instance v2, Ljava/io/File;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v4, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const-string v4, "endcard.html"

    invoke-direct {v2, v3, v4}, Ljava/io/File;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    sget-object v3, Lcom/sigmob/sdk/mraid2/e;->o:Ljava/lang/String;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v5, "---------loadURLByPackage----------"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    invoke-virtual {v2}, Ljava/io/File;->exists()Z

    move-result v3

    if-eqz v3, :cond_1

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "file://"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/e;->loadUrl(Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    new-instance v3, Ljava/io/File;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ".tgz"

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-direct {v3, v1, v0}, Ljava/io/File;-><init>(Ljava/io/File;Ljava/lang/String;)V

    new-instance v0, Lcom/czhj/volley/toolbox/DownloadItem;

    invoke-direct {v0}, Lcom/czhj/volley/toolbox/DownloadItem;-><init>()V

    iput-object p1, v0, Lcom/czhj/volley/toolbox/DownloadItem;->url:Ljava/lang/String;

    invoke-virtual {v3}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object p1

    iput-object p1, v0, Lcom/czhj/volley/toolbox/DownloadItem;->filePath:Ljava/lang/String;

    sget-object p1, Lcom/czhj/volley/toolbox/DownloadItem$FileType;->FILE:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    iput-object p1, v0, Lcom/czhj/volley/toolbox/DownloadItem;->type:Lcom/czhj/volley/toolbox/DownloadItem$FileType;

    invoke-static {}, Lcom/sigmob/sdk/base/common/p;->a()Lcom/czhj/volley/toolbox/FileDownloader;

    move-result-object p1

    new-instance v1, Lcom/sigmob/sdk/mraid2/e$2;

    invoke-direct {v1, p0, v2}, Lcom/sigmob/sdk/mraid2/e$2;-><init>(Lcom/sigmob/sdk/mraid2/e;Ljava/io/File;)V

    invoke-virtual {p1, v0, v1}, Lcom/czhj/volley/toolbox/FileDownloader;->add(Lcom/czhj/volley/toolbox/DownloadItem;Lcom/czhj/volley/toolbox/FileDownloadRequest$FileDownloadListener;)Lcom/czhj/volley/toolbox/FileDownloader$DownloadController;

    :goto_0
    return-void
.end method

.method static synthetic e(Lcom/sigmob/sdk/mraid2/e;)Ljava/lang/String;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/e;->e:Ljava/lang/String;

    return-object p0
.end method

.method private e(Ljava/lang/String;)V
    .locals 4

    sget-object v0, Lcom/sigmob/sdk/mraid2/e;->o:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "---------loadContentId----------"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/e;->getAdUnitList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v2

    if-ge v1, v2, :cond_3

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/e;->getAdUnitList()Ljava/util/List;

    move-result-object v2

    invoke-interface {v2, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    if-eqz v2, :cond_0

    iget-object v3, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz v3, :cond_0

    iget-object v3, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/Template;->templateId:Ljava/lang/String;

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    iget-object p1, v2, Lcom/sigmob/sdk/base/models/BaseAdUnit;->scene:Lcom/sigmob/sdk/base/models/rtb/Template;

    :goto_1
    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/Template;->context:Lcom/czhj/wire/okio/ByteString;

    invoke-virtual {p1}, Lcom/czhj/wire/okio/ByteString;->utf8()Ljava/lang/String;

    move-result-object p1

    goto :goto_2

    :cond_0
    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getAd()Lcom/sigmob/sdk/base/models/rtb/Ad;

    move-result-object v2

    if-eqz v2, :cond_2

    iget-object v3, v2, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    if-eqz v3, :cond_2

    iget-object v3, v2, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    if-eqz v3, :cond_2

    iget-object v3, v2, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz v3, :cond_1

    iget-object v3, v2, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/Template;->templateId:Ljava/lang/String;

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    iget-object p1, v2, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->main_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    goto :goto_1

    :cond_1
    iget-object v3, v2, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    if-eqz v3, :cond_2

    iget-object v3, v2, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-interface {v3, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    iget-object v3, v3, Lcom/sigmob/sdk/base/models/rtb/Template;->templateId:Ljava/lang/String;

    invoke-virtual {p1, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    iget-object p1, v2, Lcom/sigmob/sdk/base/models/rtb/Ad;->materials:Ljava/util/List;

    invoke-interface {p1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/MaterialMeta;->sub_template:Lcom/sigmob/sdk/base/models/rtb/Template;

    goto :goto_1

    :cond_2
    add-int/lit8 v1, v1, 0x1

    goto/16 :goto_0

    :cond_3
    const/4 p1, 0x0

    :goto_2
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/e;->b(Ljava/lang/String;)V

    :cond_4
    return-void
.end method

.method static synthetic f(Lcom/sigmob/sdk/mraid2/e;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/mraid2/e;->i:Z

    return p0
.end method

.method static synthetic g(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$a;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/e;->h:Lcom/sigmob/sdk/mraid2/e$a;

    return-object p0
.end method

.method static synthetic g()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/sigmob/sdk/mraid2/e;->o:Ljava/lang/String;

    return-object v0
.end method

.method static synthetic h(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/e;->d:Lcom/sigmob/sdk/mraid2/e;

    return-object p0
.end method

.method static synthetic i(Lcom/sigmob/sdk/mraid2/e;)Ljava/util/HashMap;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/e;->s:Ljava/util/HashMap;

    return-object p0
.end method

.method static synthetic j(Lcom/sigmob/sdk/mraid2/e;)Ljava/util/HashMap;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/e;->r:Ljava/util/HashMap;

    return-object p0
.end method

.method static synthetic k(Lcom/sigmob/sdk/mraid2/e;)Lcom/sigmob/sdk/mraid2/e$b;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/e;->g:Lcom/sigmob/sdk/mraid2/e$b;

    return-object p0
.end method

.method static synthetic l(Lcom/sigmob/sdk/mraid2/e;)Z
    .locals 0

    iget-boolean p0, p0, Lcom/sigmob/sdk/mraid2/e;->l:Z

    return p0
.end method

.method static synthetic m(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/LinearLayout;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/e;->k:Landroid/widget/LinearLayout;

    return-object p0
.end method

.method static synthetic n(Lcom/sigmob/sdk/mraid2/e;)Landroid/widget/FrameLayout;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/mraid2/e;->j:Landroid/widget/FrameLayout;

    return-object p0
.end method


# virtual methods
.method public bridge synthetic a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/mraid2/a;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-void
.end method

.method public bridge synthetic a(Z)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/mraid2/a;->a(Z)V

    return-void
.end method

.method public b(Ljava/lang/String;)V
    .locals 8

    sget-object v0, Lcom/sigmob/sdk/mraid2/e;->o:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "---------loadContentHtml----------"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v0, Lcom/sigmob/sdk/mraid2/b$a;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e;->c:Lcom/sigmob/sdk/mraid2/b;

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/mraid2/b$a;-><init>(Lcom/sigmob/sdk/mraid2/b;)V

    const-string v1, "sigandroid"

    invoke-virtual {p0, v0, v1}, Lcom/sigmob/sdk/mraid2/e;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    invoke-static {p1}, Lcom/czhj/sdk/common/utils/Md5Util;->md5(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ".html"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {p1, v0}, Lcom/sigmob/sdk/base/utils/b;->a(Ljava/lang/String;Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "file://"

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/e;->loadUrl(Ljava/lang/String;)V

    goto :goto_0

    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/czhj/sdk/common/network/Networking;->getBaseUrlScheme()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "://localhost/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    const/4 v7, 0x0

    const-string v5, "text/html"

    const-string v6, "UTF-8"

    move-object v2, p0

    move-object v4, p1

    invoke-virtual/range {v2 .. v7}, Lcom/sigmob/sdk/mraid2/e;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public bridge synthetic b(Z)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/mraid2/a;->b(Z)V

    return-void
.end method

.method public c(Ljava/lang/String;)V
    .locals 3

    sget-object v0, Lcom/sigmob/sdk/mraid2/e;->o:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "---------loadContentUrl----------"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    new-instance v0, Lcom/sigmob/sdk/mraid2/b$a;

    iget-object v1, p0, Lcom/sigmob/sdk/mraid2/e;->c:Lcom/sigmob/sdk/mraid2/b;

    invoke-direct {v0, v1}, Lcom/sigmob/sdk/mraid2/b$a;-><init>(Lcom/sigmob/sdk/mraid2/b;)V

    const-string v1, "sigandroid"

    invoke-virtual {p0, v0, v1}, Lcom/sigmob/sdk/mraid2/e;->addJavascriptInterface(Ljava/lang/Object;Ljava/lang/String;)V

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/mraid2/e;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method public destroy()V
    .locals 2

    invoke-super {p0}, Lcom/sigmob/sdk/mraid2/a;->destroy()V

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/e;->getAdUnitList()Ljava/util/List;

    move-result-object v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/e;->getAdUnitList()Ljava/util/List;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    const/4 v0, 0x0

    :goto_0
    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/e;->getAdUnitList()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-ge v0, v1, :cond_1

    invoke-virtual {p0}, Lcom/sigmob/sdk/mraid2/e;->getAdUnitList()Ljava/util/List;

    move-result-object v1

    invoke-interface {v1, v0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/sigmob/sdk/base/models/BaseAdUnit;

    invoke-virtual {v1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSessionManager()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v1

    if-eqz v1, :cond_0

    invoke-interface {v1}, Lcom/sigmob/sdk/base/common/ab;->a()V

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-void
.end method

.method public getAdSize()Lcom/sigmob/sdk/base/common/e;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e;->q:Lcom/sigmob/sdk/base/common/e;

    return-object v0
.end method

.method getAdUnitList()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Lcom/sigmob/sdk/base/models/BaseAdUnit;",
            ">;"
        }
    .end annotation

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e;->c:Lcom/sigmob/sdk/mraid2/b;

    invoke-virtual {v0}, Lcom/sigmob/sdk/mraid2/b;->b()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public getMraidBridge()Lcom/sigmob/sdk/mraid2/b;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e;->c:Lcom/sigmob/sdk/mraid2/b;

    return-object v0
.end method

.method public getScrollTouchListener()Lcom/sigmob/sdk/mraid2/e$c;
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid2/e;->f:Lcom/sigmob/sdk/mraid2/e$c;

    return-object v0
.end method

.method public bridge synthetic loadUrl(Ljava/lang/String;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/mraid2/a;->loadUrl(Ljava/lang/String;)V

    return-void
.end method

.method protected onVisibilityChanged(Landroid/view/View;I)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/sigmob/sdk/mraid2/a;->onVisibilityChanged(Landroid/view/View;I)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid2/e;->c:Lcom/sigmob/sdk/mraid2/b;

    if-nez p2, :cond_0

    const/4 p2, 0x1

    goto :goto_0

    :cond_0
    const/4 p2, 0x0

    :goto_0
    invoke-virtual {p1, p2}, Lcom/sigmob/sdk/mraid2/b;->a(Z)V

    return-void
.end method

.method public setAdSize(Lcom/sigmob/sdk/base/common/e;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/e;->q:Lcom/sigmob/sdk/base/common/e;

    return-void
.end method

.method public setLoadListener(Lcom/sigmob/sdk/mraid2/e$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/e;->h:Lcom/sigmob/sdk/mraid2/e$a;

    return-void
.end method

.method public setNextWebViewListener(Lcom/sigmob/sdk/mraid2/e$b;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/e;->g:Lcom/sigmob/sdk/mraid2/e$b;

    return-void
.end method

.method public setScrollTouchListener(Lcom/sigmob/sdk/mraid2/e$c;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid2/e;->f:Lcom/sigmob/sdk/mraid2/e$c;

    return-void
.end method

.method public bridge synthetic setWebViewClient(Landroid/webkit/WebViewClient;)V
    .locals 0

    invoke-super {p0, p1}, Lcom/sigmob/sdk/mraid2/a;->setWebViewClient(Landroid/webkit/WebViewClient;)V

    return-void
.end method
