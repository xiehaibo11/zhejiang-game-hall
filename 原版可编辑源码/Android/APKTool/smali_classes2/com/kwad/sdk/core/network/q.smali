.class public final Lcom/kwad/sdk/core/network/q;
.super Ljava/lang/Object;


# static fields
.field private static apJ:Ljava/lang/String; = ""

.field private static apK:Ljava/lang/String; = ""


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static Bi()Ljava/lang/String;
    .locals 6

    sget-object v0, Lcom/kwad/sdk/core/network/q;->apJ:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/kwad/sdk/core/network/q;->apJ:Ljava/lang/String;

    return-object v0

    :cond_0
    const-string v0, "http.agent"

    invoke-static {v0}, Ljava/lang/System;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/core/network/q;->apJ:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_1

    sget-object v0, Lcom/kwad/sdk/core/network/q;->apJ:Ljava/lang/String;

    return-object v0

    :cond_1
    new-instance v0, Ljava/lang/StringBuffer;

    invoke-direct {v0}, Ljava/lang/StringBuffer;-><init>()V

    sget-object v1, Lcom/kwad/sdk/core/network/q;->apJ:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result v1

    const/4 v2, 0x0

    move v3, v2

    :goto_0
    if-ge v3, v1, :cond_4

    sget-object v4, Lcom/kwad/sdk/core/network/q;->apJ:Ljava/lang/String;

    invoke-virtual {v4, v3}, Ljava/lang/String;->charAt(I)C

    move-result v4

    const/16 v5, 0x1f

    if-le v4, v5, :cond_3

    const/16 v5, 0x7f

    if-lt v4, v5, :cond_2

    goto :goto_1

    :cond_2
    invoke-virtual {v0, v4}, Ljava/lang/StringBuffer;->append(C)Ljava/lang/StringBuffer;

    goto :goto_2

    :cond_3
    :goto_1
    const/4 v5, 0x1

    new-array v5, v5, [Ljava/lang/Object;

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    aput-object v4, v5, v2

    const-string v4, "\\u%04x"

    invoke-static {v4, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    :goto_2
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_4
    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/sdk/core/network/q;->apJ:Ljava/lang/String;

    return-object v0
.end method

.method public static Bj()Ljava/lang/String;
    .locals 3

    sget-object v0, Lcom/kwad/sdk/core/network/q;->apK:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/kwad/sdk/core/network/q;->apK:Ljava/lang/String;

    return-object v0

    :cond_0
    const-class v0, Lcom/kwad/sdk/service/a/e;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/e;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/e;->getContext()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_1

    const-string v0, ""

    return-object v0

    :cond_1
    :try_start_0
    invoke-static {v0}, Lcom/kwad/sdk/utils/y;->cf(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/kwad/sdk/core/network/q;->apK:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    sget-object v0, Lcom/kwad/sdk/core/network/q;->apK:Ljava/lang/String;

    return-object v0

    :cond_2
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x11

    if-lt v1, v2, :cond_3

    invoke-static {v0}, Landroid/webkit/WebSettings;->getDefaultUserAgent(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    :goto_0
    sput-object v1, Lcom/kwad/sdk/core/network/q;->apK:Ljava/lang/String;

    goto :goto_1

    :cond_3
    const-string v1, "http.agent"

    invoke-static {v1}, Ljava/lang/System;->getProperty(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :goto_1
    sget-object v1, Lcom/kwad/sdk/core/network/q;->apK:Ljava/lang/String;

    const-string v2, "UTF-8"

    invoke-static {v1, v2}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    sput-object v1, Lcom/kwad/sdk/core/network/q;->apK:Ljava/lang/String;

    invoke-static {v0, v1}, Lcom/kwad/sdk/utils/y;->af(Landroid/content/Context;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    sget-object v0, Lcom/kwad/sdk/core/network/q;->apK:Ljava/lang/String;

    return-object v0
.end method

.method public static b(Ljava/net/HttpURLConnection;)V
    .locals 2

    invoke-static {}, Lcom/kwad/sdk/core/network/q;->getUserAgent()Ljava/lang/String;

    move-result-object v0

    const-string v1, "User-Agent"

    invoke-virtual {p0, v1, v0}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/core/network/q;->Bj()Ljava/lang/String;

    move-result-object v0

    const-string v1, "BrowserUa"

    invoke-virtual {p0, v1, v0}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/core/network/q;->Bi()Ljava/lang/String;

    move-result-object v0

    const-string v1, "SystemUa"

    invoke-virtual {p0, v1, v0}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static getDefaultUserAgent()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/core/network/q;->Bi()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "-ksad-android-3.3.42"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getUserAgent()Ljava/lang/String;
    .locals 1

    const-class v0, Lcom/kwad/sdk/service/a/f;

    invoke-static {v0}, Lcom/kwad/sdk/service/ServiceProvider;->get(Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/service/a/f;

    invoke-interface {v0}, Lcom/kwad/sdk/service/a/f;->getUserAgent()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
