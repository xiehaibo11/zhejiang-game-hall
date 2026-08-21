.class public final Lcom/mbridge/msdk/mbdownload/g;
.super Ljava/lang/Object;
.source "MSGMapper.java"


# static fields
.field public static a:Ljava/lang/String; = ""

.field public static b:Ljava/lang/String; = ""

.field public static c:Ljava/lang/String; = ""

.field public static d:Ljava/lang/String; = ""

.field public static e:Ljava/lang/String; = ""

.field public static f:Ljava/lang/String; = ""

.field public static g:Ljava/lang/String; = ""

.field public static h:Ljava/lang/String; = ""

.field public static i:Ljava/lang/String; = ""

.field public static j:Ljava/lang/String; = ""

.field public static k:Ljava/lang/String; = ""

.field public static l:Ljava/lang/String; = ""

.field public static m:Ljava/lang/String; = ""

.field public static n:Ljava/lang/String; = ""

.field public static o:Ljava/lang/String; = ""

.field public static p:Ljava/lang/String; = ""

.field public static q:Ljava/lang/String; = ""

.field public static r:Ljava/lang/String; = ""


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    .line 34
    sget-object v0, Lcom/mbridge/msdk/mbdownload/g;->o:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 35
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v0

    .line 36
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const-string v2, "mbridge_download_notify_ins"

    const-string v3, "string"

    invoke-virtual {v1, v2, v3, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 37
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/mbdownload/g;->o:Ljava/lang/String;

    .line 39
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/mbdownload/g;->o:Ljava/lang/String;

    return-object p0
.end method

.method public static b(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    .line 43
    sget-object v0, Lcom/mbridge/msdk/mbdownload/g;->p:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 44
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v0

    .line 45
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const-string v2, "mbridge_download_notify_open"

    const-string v3, "string"

    invoke-virtual {v1, v2, v3, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 46
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/mbdownload/g;->p:Ljava/lang/String;

    .line 48
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/mbdownload/g;->p:Ljava/lang/String;

    return-object p0
.end method

.method public static c(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    .line 52
    sget-object v0, Lcom/mbridge/msdk/mbdownload/g;->q:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 53
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v0

    .line 54
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const-string v2, "mbridge_download_notify_ins_progress_des"

    const-string v3, "string"

    invoke-virtual {v1, v2, v3, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 55
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/mbdownload/g;->q:Ljava/lang/String;

    .line 57
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/mbdownload/g;->q:Ljava/lang/String;

    return-object p0
.end method

.method public static d(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    .line 61
    sget-object v0, Lcom/mbridge/msdk/mbdownload/g;->r:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 62
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v0

    .line 63
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const-string v2, "mbridge_download_notify_open_progress_des"

    const-string v3, "string"

    invoke-virtual {v1, v2, v3, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 64
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/mbdownload/g;->r:Ljava/lang/String;

    .line 66
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/mbdownload/g;->r:Ljava/lang/String;

    return-object p0
.end method

.method public static e(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    .line 99
    sget-object v0, Lcom/mbridge/msdk/mbdownload/g;->d:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 100
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v0

    .line 101
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const-string v2, "mbridge_download_notify_network_error"

    const-string v3, "string"

    invoke-virtual {v1, v2, v3, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 102
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/mbdownload/g;->d:Ljava/lang/String;

    .line 104
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/mbdownload/g;->d:Ljava/lang/String;

    return-object p0
.end method

.method public static f(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    .line 108
    sget-object v0, Lcom/mbridge/msdk/mbdownload/g;->e:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 109
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v0

    .line 110
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const-string v2, "mbridge_download_notify_start_download"

    const-string v3, "string"

    invoke-virtual {v1, v2, v3, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 111
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/mbdownload/g;->e:Ljava/lang/String;

    .line 113
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/mbdownload/g;->e:Ljava/lang/String;

    return-object p0
.end method

.method public static g(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    .line 135
    sget-object v0, Lcom/mbridge/msdk/mbdownload/g;->h:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 136
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v0

    .line 137
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const-string v2, "mbridge_download_notify_update_finish_to_install"

    const-string v3, "string"

    invoke-virtual {v1, v2, v3, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 138
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/mbdownload/g;->h:Ljava/lang/String;

    .line 140
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/mbdownload/g;->h:Ljava/lang/String;

    return-object p0
.end method

.method public static h(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    .line 144
    sget-object v0, Lcom/mbridge/msdk/mbdownload/g;->i:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 145
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v0

    .line 146
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const-string v2, "mbridge_download_notify_downloading"

    const-string v3, "string"

    invoke-virtual {v1, v2, v3, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 147
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/mbdownload/g;->i:Ljava/lang/String;

    .line 149
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/mbdownload/g;->i:Ljava/lang/String;

    return-object p0
.end method

.method public static i(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    .line 153
    sget-object v0, Lcom/mbridge/msdk/mbdownload/g;->j:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 154
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v0

    .line 155
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const-string v2, "mbridge_download_notify_download_finish_to_install"

    const-string v3, "string"

    invoke-virtual {v1, v2, v3, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 156
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/mbdownload/g;->j:Ljava/lang/String;

    .line 158
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/mbdownload/g;->j:Ljava/lang/String;

    return-object p0
.end method

.method public static j(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    .line 162
    sget-object v0, Lcom/mbridge/msdk/mbdownload/g;->k:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 163
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v0

    .line 164
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const-string v2, "mbridge_download_notify_download_finish_to_install"

    const-string v3, "string"

    invoke-virtual {v1, v2, v3, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 165
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/mbdownload/g;->k:Ljava/lang/String;

    .line 167
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/mbdownload/g;->k:Ljava/lang/String;

    return-object p0
.end method

.method public static k(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    .line 171
    sget-object v0, Lcom/mbridge/msdk/mbdownload/g;->l:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 172
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->d()Ljava/lang/String;

    move-result-object v0

    .line 173
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    const-string v2, "mbridge_download_notify_update_package"

    const-string v3, "string"

    invoke-virtual {v1, v2, v3, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    .line 174
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    invoke-virtual {p0, v0}, Landroid/content/res/Resources;->getString(I)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/mbridge/msdk/mbdownload/g;->l:Ljava/lang/String;

    .line 176
    :cond_0
    sget-object p0, Lcom/mbridge/msdk/mbdownload/g;->l:Ljava/lang/String;

    return-object p0
.end method
