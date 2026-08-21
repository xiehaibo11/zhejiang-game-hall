.class public Lcom/bianfeng/thridlibrary/ImageLoadUtils;
.super Ljava/lang/Object;
.source "ImageLoadUtils.java"


# static fields
.field private static volatile utils:Lcom/bianfeng/thridlibrary/ImageLoadUtils;


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 9
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private checkGif(Ljava/lang/String;)Z
    .locals 1

    const-string v0, ".gif"

    .line 30
    invoke-virtual {p1, v0}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_0
    const/4 p1, 0x0

    return p1
.end method

.method public static getInstance()Lcom/bianfeng/thridlibrary/ImageLoadUtils;
    .locals 2

    .line 11
    sget-object v0, Lcom/bianfeng/thridlibrary/ImageLoadUtils;->utils:Lcom/bianfeng/thridlibrary/ImageLoadUtils;

    if-nez v0, :cond_1

    .line 12
    const-class v0, Lcom/bianfeng/thridlibrary/ImageLoadUtils;

    monitor-enter v0

    .line 13
    :try_start_0
    sget-object v1, Lcom/bianfeng/thridlibrary/ImageLoadUtils;->utils:Lcom/bianfeng/thridlibrary/ImageLoadUtils;

    if-nez v1, :cond_0

    .line 14
    new-instance v1, Lcom/bianfeng/thridlibrary/ImageLoadUtils;

    invoke-direct {v1}, Lcom/bianfeng/thridlibrary/ImageLoadUtils;-><init>()V

    sput-object v1, Lcom/bianfeng/thridlibrary/ImageLoadUtils;->utils:Lcom/bianfeng/thridlibrary/ImageLoadUtils;

    .line 16
    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    .line 18
    :cond_1
    :goto_0
    sget-object v0, Lcom/bianfeng/thridlibrary/ImageLoadUtils;->utils:Lcom/bianfeng/thridlibrary/ImageLoadUtils;

    return-object v0
.end method


# virtual methods
.method public displayImage(Landroid/app/Activity;Ljava/lang/String;Landroid/widget/ImageView;)V
    .locals 1

    .line 22
    invoke-direct {p0, p2}, Lcom/bianfeng/thridlibrary/ImageLoadUtils;->checkGif(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 23
    invoke-static {p1}, Lcom/bumptech/glide/Glide;->with(Landroid/app/Activity;)Lcom/bumptech/glide/RequestManager;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/bumptech/glide/RequestManager;->load(Ljava/lang/String;)Lcom/bumptech/glide/DrawableTypeRequest;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bumptech/glide/DrawableTypeRequest;->asGif()Lcom/bumptech/glide/GifTypeRequest;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/bumptech/glide/GifTypeRequest;->into(Landroid/widget/ImageView;)Lcom/bumptech/glide/request/target/Target;

    goto :goto_0

    .line 25
    :cond_0
    invoke-static {p1}, Lcom/bumptech/glide/Glide;->with(Landroid/app/Activity;)Lcom/bumptech/glide/RequestManager;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/bumptech/glide/RequestManager;->load(Ljava/lang/String;)Lcom/bumptech/glide/DrawableTypeRequest;

    move-result-object p1

    invoke-virtual {p1, p3}, Lcom/bumptech/glide/DrawableTypeRequest;->into(Landroid/widget/ImageView;)Lcom/bumptech/glide/request/target/Target;

    :goto_0
    return-void
.end method
