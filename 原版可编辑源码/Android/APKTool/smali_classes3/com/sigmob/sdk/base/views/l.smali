.class public Lcom/sigmob/sdk/base/views/l;
.super Lcom/sigmob/sdk/base/views/e;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/sigmob/sdk/base/views/l$b;,
        Lcom/sigmob/sdk/base/views/l$a;
    }
.end annotation


# static fields
.field private static b:F = 10.0f

.field private static final c:F = 1.0f


# instance fields
.field private final a:Lcom/sigmob/sdk/base/views/b;

.field private d:Lcom/sigmob/sdk/base/views/l$a;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;Ljava/lang/String;ZZ)V
    .locals 4

    invoke-direct {p0, p1}, Lcom/sigmob/sdk/base/views/e;-><init>(Landroid/content/Context;)V

    invoke-direct {p0}, Lcom/sigmob/sdk/base/views/l;->h()V

    const/4 p1, 0x2

    const/4 p4, 0x1

    :try_start_0
    new-instance v0, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/l;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v1

    new-instance v2, Ljava/lang/String;

    const-string v3, "c2V0SmF2YVNjcmlwdEVuYWJsZWQ="

    invoke-static {v3, p1}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object v3

    invoke-direct {v2, v3}, Ljava/lang/String;-><init>([B)V

    invoke-direct {v0, v1, v2}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;-><init>(Ljava/lang/Object;Ljava/lang/String;)V

    sget-object v1, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    invoke-static {p4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->addParam(Ljava/lang/Class;Ljava/lang/Object;)Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {v0}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->execute()Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    :try_start_1
    new-instance v0, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/l;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v1

    new-instance v2, Ljava/lang/String;

    const-string v3, "c2V0QWxsb3dGaWxlQWNjZXNz"

    invoke-static {v3, p1}, Landroid/util/Base64;->decode(Ljava/lang/String;I)[B

    move-result-object p1

    invoke-direct {v2, p1}, Ljava/lang/String;-><init>([B)V

    invoke-direct {v0, v1, v2}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;-><init>(Ljava/lang/Object;Ljava/lang/String;)V

    sget-object p1, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    invoke-static {p4}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-virtual {v0, p1, v1}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->addParam(Ljava/lang/Class;Ljava/lang/Object;)Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;

    invoke-virtual {v0}, Lcom/czhj/sdk/common/utils/ReflectionUtil$MethodBuilder;->execute()Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception p1

    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    invoke-virtual {p0, p4}, Lcom/sigmob/sdk/base/views/l;->a(Z)V

    const/4 p1, 0x0

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/views/l;->setBackgroundColor(I)V

    if-eqz p3, :cond_0

    new-instance p1, Landroid/widget/RelativeLayout$LayoutParams;

    const/4 p3, -0x1

    const/4 v0, -0x2

    invoke-direct {p1, p3, v0}, Landroid/widget/RelativeLayout$LayoutParams;-><init>(II)V

    new-instance p3, Lcom/sigmob/sdk/base/views/b;

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/l;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-direct {p3, v0, p4}, Lcom/sigmob/sdk/base/views/b;-><init>(Landroid/content/Context;I)V

    iput-object p3, p0, Lcom/sigmob/sdk/base/views/l;->a:Lcom/sigmob/sdk/base/views/b;

    invoke-virtual {p3, p2}, Lcom/sigmob/sdk/base/views/b;->a(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/sigmob/sdk/base/views/l;->a:Lcom/sigmob/sdk/base/views/b;

    invoke-static {}, Lcom/sigmob/sdk/base/d;->g()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Lcom/sigmob/sdk/base/views/b;->b(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/sigmob/sdk/base/views/l;->a:Lcom/sigmob/sdk/base/views/b;

    invoke-virtual {p0, p2, p1}, Lcom/sigmob/sdk/base/views/l;->addView(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V

    goto :goto_2

    :cond_0
    const/4 p1, 0x0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/l;->a:Lcom/sigmob/sdk/base/views/b;

    :goto_2
    new-instance p1, Lcom/sigmob/sdk/base/views/l$b;

    invoke-direct {p1, p0}, Lcom/sigmob/sdk/base/views/l$b;-><init>(Lcom/sigmob/sdk/base/views/l;)V

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/views/l;->setOnTouchListener(Landroid/view/View$OnTouchListener;)V

    return-void
.end method

.method static synthetic a(Lcom/sigmob/sdk/base/views/l;)Lcom/sigmob/sdk/base/views/l$a;
    .locals 0

    iget-object p0, p0, Lcom/sigmob/sdk/base/views/l;->d:Lcom/sigmob/sdk/base/views/l$a;

    return-object p0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;ZZ)Lcom/sigmob/sdk/base/views/l;
    .locals 1

    invoke-static {p0}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;)Z

    new-instance v0, Lcom/sigmob/sdk/base/views/l;

    invoke-direct {v0, p0, p1, p2, p3}, Lcom/sigmob/sdk/base/views/l;-><init>(Landroid/content/Context;Ljava/lang/String;ZZ)V

    return-object v0
.end method

.method private h()V
    .locals 2

    const/4 v0, 0x0

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/views/l;->setHorizontalScrollBarEnabled(Z)V

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/views/l;->setHorizontalScrollbarOverlay(Z)V

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/views/l;->setVerticalScrollBarEnabled(Z)V

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/views/l;->setVerticalScrollbarOverlay(Z)V

    invoke-virtual {p0}, Lcom/sigmob/sdk/base/views/l;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/webkit/WebSettings;->setSupportZoom(Z)V

    invoke-virtual {p0, v0}, Lcom/sigmob/sdk/base/views/l;->setScrollBarStyle(I)V

    return-void
.end method


# virtual methods
.method a(Ljava/lang/String;)V
    .locals 8

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

    invoke-virtual {p0, p1}, Lcom/sigmob/sdk/base/views/l;->loadUrl(Ljava/lang/String;)V

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

    const-string v6, "utf-8"

    move-object v2, p0

    move-object v4, p1

    invoke-virtual/range {v2 .. v7}, Lcom/sigmob/sdk/base/views/l;->loadDataWithBaseURL(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-void
.end method

.method public destroy()V
    .locals 1

    const-string v0, "CreativeWebView destroy() callSigmobLog.d( \"CreativeWebView destroy() called\");ed"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    invoke-super {p0}, Lcom/sigmob/sdk/base/views/e;->destroy()V

    return-void
.end method

.method public setLogoClickListener(Landroid/view/View$OnClickListener;)V
    .locals 1

    iget-object v0, p0, Lcom/sigmob/sdk/base/views/l;->a:Lcom/sigmob/sdk/base/views/b;

    if-eqz v0, :cond_0

    invoke-virtual {v0, p1}, Lcom/sigmob/sdk/base/views/b;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    :cond_0
    return-void
.end method

.method public setWebViewClickListener(Lcom/sigmob/sdk/base/views/l$a;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/base/views/l;->d:Lcom/sigmob/sdk/base/views/l$a;

    return-void
.end method
