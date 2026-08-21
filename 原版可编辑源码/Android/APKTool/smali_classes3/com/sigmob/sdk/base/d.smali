.class public Lcom/sigmob/sdk/base/d;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String; = "sig_ad"

.field private static final b:Ljava/lang/String; = "sig_close"

.field private static final c:Ljava/lang/String; = "sig_back"

.field private static final d:Ljava/lang/String; = "sig_skip_args_1"

.field private static final e:Ljava/lang/String; = "sig_skip_args_2"

.field private static final f:Ljava/lang/String; = "sig_skip_ad_args"

.field private static final g:Ljava/lang/String; = "sig_close_args"

.field private static final h:Ljava/lang/String; = "sig_close_ad_title"

.field private static final i:Ljava/lang/String; = "sig_close_ad_message"

.field private static final j:Ljava/lang/String; = "sig_close_ad_cancel"

.field private static final k:Ljava/lang/String; = "sig_close_ad_ok"

.field private static final l:Ljava/lang/String; = "sig_custom_dialog"

.field private static final m:Ljava/lang/String; = "sig_dialog_window_anim"

.field private static final n:Ljava/lang/String; = "sig_transparent_style"

.field private static final o:Ljava/lang/String; = "sig_base_theme"

.field private static final p:Ljava/lang/String; = "sig_land_theme"

.field private static final q:Ljava/lang/String; = "sig_transparent_lang"


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a()I
    .locals 2

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_transparent_lang"

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/ClientMetadata;->getStyleResources(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static varargs a([Ljava/lang/Object;)Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_skip_args_1"

    const-string v2, "\u8df3\u8fc7 %d"

    invoke-virtual {v0, v1, v2, p0}, Lcom/czhj/sdk/common/ClientMetadata;->getStringResources(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static b()I
    .locals 2

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_base_theme"

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/ClientMetadata;->getStyleResources(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static varargs b([Ljava/lang/Object;)Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_skip_args_2"

    const-string v2, "%d \u8df3\u8fc7"

    invoke-virtual {v0, v1, v2, p0}, Lcom/czhj/sdk/common/ClientMetadata;->getStringResources(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static c()I
    .locals 2

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_land_theme"

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/ClientMetadata;->getStyleResources(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static varargs c([Ljava/lang/Object;)Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_skip_ad_args"

    const-string v2, "\u8df3\u8fc7\u5e7f\u544a %d"

    invoke-virtual {v0, v1, v2, p0}, Lcom/czhj/sdk/common/ClientMetadata;->getStringResources(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static d()I
    .locals 2

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_transparent_style"

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/ClientMetadata;->getStyleResources(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static varargs d([Ljava/lang/Object;)Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_close_args"

    const-string v2, "%s \u8df3\u8fc7"

    invoke-virtual {v0, v1, v2, p0}, Lcom/czhj/sdk/common/ClientMetadata;->getStringResources(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static e()I
    .locals 2

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_custom_dialog"

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/ClientMetadata;->getStyleResources(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static f()I
    .locals 2

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_dialog_window_anim"

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/ClientMetadata;->getStyleResources(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static g()Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_ad"

    const-string v2, "\u5e7f\u544a"

    invoke-virtual {v0, v1, v2}, Lcom/czhj/sdk/common/ClientMetadata;->getStringResources(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static h()Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_close"

    const-string v2, "\u8df3\u8fc7"

    invoke-virtual {v0, v1, v2}, Lcom/czhj/sdk/common/ClientMetadata;->getStringResources(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static i()Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_back"

    const-string v2, "\u8fd4\u56de"

    invoke-virtual {v0, v1, v2}, Lcom/czhj/sdk/common/ClientMetadata;->getStringResources(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static j()Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_close_ad_message"

    const-string v2, "\u8fd8\u5269_SEC_\u79d2\uff0c\u60a8\u5c31\u53ef\u4ee5\u83b7\u5f97\u5956\u52b1\u4e86\u54e6!"

    invoke-virtual {v0, v1, v2}, Lcom/czhj/sdk/common/ClientMetadata;->getStringResources(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static k()Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_close_ad_title"

    const-string v2, "\u5173\u95ed\u89c6\u9891?"

    invoke-virtual {v0, v1, v2}, Lcom/czhj/sdk/common/ClientMetadata;->getStringResources(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static l()Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_close_ad_cancel"

    const-string v2, "\u7ee7\u7eed\u64ad\u653e"

    invoke-virtual {v0, v1, v2}, Lcom/czhj/sdk/common/ClientMetadata;->getStringResources(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static m()Ljava/lang/String;
    .locals 3

    invoke-static {}, Lcom/czhj/sdk/common/ClientMetadata;->getInstance()Lcom/czhj/sdk/common/ClientMetadata;

    move-result-object v0

    const-string v1, "sig_close_ad_ok"

    const-string v2, "\u786e\u5b9a\u5173\u95ed!"

    invoke-virtual {v0, v1, v2}, Lcom/czhj/sdk/common/ClientMetadata;->getStringResources(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
