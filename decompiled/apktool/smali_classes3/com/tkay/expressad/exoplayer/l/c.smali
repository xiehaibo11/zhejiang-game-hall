.class public final Lcom/tkay/expressad/exoplayer/l/c;
.super Landroid/view/Surface;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/l/c$a;
    }
.end annotation


# static fields
.field private static final b:Ljava/lang/String; = "DummySurface"

.field private static final c:Ljava/lang/String; = "EGL_EXT_protected_content"

.field private static final d:Ljava/lang/String; = "EGL_KHR_surfaceless_context"

.field private static e:I

.field private static f:Z


# instance fields
.field public final a:Z

.field private final g:Lcom/tkay/expressad/exoplayer/l/c$a;

.field private h:Z


# direct methods
.method private constructor <init>(Lcom/tkay/expressad/exoplayer/l/c$a;Landroid/graphics/SurfaceTexture;Z)V
    .locals 0

    .line 100
    invoke-direct {p0, p2}, Landroid/view/Surface;-><init>(Landroid/graphics/SurfaceTexture;)V

    .line 101
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/l/c;->g:Lcom/tkay/expressad/exoplayer/l/c$a;

    .line 102
    iput-boolean p3, p0, Lcom/tkay/expressad/exoplayer/l/c;->a:Z

    return-void
.end method

.method synthetic constructor <init>(Lcom/tkay/expressad/exoplayer/l/c$a;Landroid/graphics/SurfaceTexture;ZB)V
    .locals 0

    .line 48
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/expressad/exoplayer/l/c;-><init>(Lcom/tkay/expressad/exoplayer/l/c$a;Landroid/graphics/SurfaceTexture;Z)V

    return-void
.end method

.method public static a(Landroid/content/Context;Z)Lcom/tkay/expressad/exoplayer/l/c;
    .locals 2

    .line 2121
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x11

    if-lt v0, v1, :cond_3

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    .line 94
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/l/c;->a(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_0

    goto :goto_0

    :cond_0
    move p0, v0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p0, 0x1

    :goto_1
    invoke-static {p0}, Lcom/tkay/expressad/exoplayer/k/a;->b(Z)V

    .line 95
    new-instance p0, Lcom/tkay/expressad/exoplayer/l/c$a;

    invoke-direct {p0}, Lcom/tkay/expressad/exoplayer/l/c$a;-><init>()V

    if-eqz p1, :cond_2

    .line 96
    sget v0, Lcom/tkay/expressad/exoplayer/l/c;->e:I

    :cond_2
    invoke-virtual {p0, v0}, Lcom/tkay/expressad/exoplayer/l/c$a;->a(I)Lcom/tkay/expressad/exoplayer/l/c;

    move-result-object p0

    return-object p0

    .line 2122
    :cond_3
    new-instance p0, Ljava/lang/UnsupportedOperationException;

    const-string p1, "Unsupported prior to API level 17"

    invoke-direct {p0, p1}, Ljava/lang/UnsupportedOperationException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method private static a()V
    .locals 2

    .line 121
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x11

    if-lt v0, v1, :cond_0

    return-void

    .line 122
    :cond_0
    new-instance v0, Ljava/lang/UnsupportedOperationException;

    const-string v1, "Unsupported prior to API level 17"

    invoke-direct {v0, v1}, Ljava/lang/UnsupportedOperationException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public static declared-synchronized a(Landroid/content/Context;)Z
    .locals 6

    const-class v0, Lcom/tkay/expressad/exoplayer/l/c;

    monitor-enter v0

    .line 73
    :try_start_0
    sget-boolean v1, Lcom/tkay/expressad/exoplayer/l/c;->f:Z

    const/4 v2, 0x1

    const/4 v3, 0x0

    if-nez v1, :cond_7

    .line 74
    sget v1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v4, 0x18

    if-ge v1, v4, :cond_1

    :cond_0
    :goto_0
    move p0, v3

    goto :goto_1

    .line 1128
    :cond_1
    sget v1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v4, 0x1a

    if-ge v1, v4, :cond_2

    const-string v1, "samsung"

    sget-object v5, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    invoke-virtual {v1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    const-string v1, "XT1650"

    sget-object v5, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    invoke-virtual {v1, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    goto :goto_0

    .line 1135
    :cond_2
    sget v1, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ge v1, v4, :cond_3

    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const-string v1, "android.hardware.vr.high_performance"

    invoke-virtual {p0, v1}, Landroid/content/pm/PackageManager;->hasSystemFeature(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_3

    goto :goto_0

    .line 1140
    :cond_3
    invoke-static {v3}, Landroid/opengl/EGL14;->eglGetDisplay(I)Landroid/opengl/EGLDisplay;

    move-result-object p0

    const/16 v1, 0x3055

    .line 1141
    invoke-static {p0, v1}, Landroid/opengl/EGL14;->eglQueryString(Landroid/opengl/EGLDisplay;I)Ljava/lang/String;

    move-result-object p0

    if-nez p0, :cond_4

    goto :goto_0

    :cond_4
    const-string v1, "EGL_EXT_protected_content"

    .line 1145
    invoke-virtual {p0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    goto :goto_0

    :cond_5
    const-string v1, "EGL_KHR_surfaceless_context"

    .line 1151
    invoke-virtual {p0, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_6

    move p0, v2

    goto :goto_1

    :cond_6
    const/4 p0, 0x2

    .line 74
    :goto_1
    sput p0, Lcom/tkay/expressad/exoplayer/l/c;->e:I

    .line 75
    sput-boolean v2, Lcom/tkay/expressad/exoplayer/l/c;->f:Z

    .line 77
    :cond_7
    sget p0, Lcom/tkay/expressad/exoplayer/l/c;->e:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    if-eqz p0, :cond_8

    return v2

    :cond_8
    return v3

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method private static b(Landroid/content/Context;)I
    .locals 4

    .line 128
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    const/16 v1, 0x1a

    const/4 v2, 0x0

    if-ge v0, v1, :cond_1

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->c:Ljava/lang/String;

    const-string v3, "samsung"

    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/tkay/expressad/exoplayer/k/af;->d:Ljava/lang/String;

    const-string v3, "XT1650"

    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    :cond_0
    return v2

    .line 135
    :cond_1
    sget v0, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-ge v0, v1, :cond_2

    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const-string v0, "android.hardware.vr.high_performance"

    invoke-virtual {p0, v0}, Landroid/content/pm/PackageManager;->hasSystemFeature(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_2

    return v2

    .line 140
    :cond_2
    invoke-static {v2}, Landroid/opengl/EGL14;->eglGetDisplay(I)Landroid/opengl/EGLDisplay;

    move-result-object p0

    const/16 v0, 0x3055

    .line 141
    invoke-static {p0, v0}, Landroid/opengl/EGL14;->eglQueryString(Landroid/opengl/EGLDisplay;I)Ljava/lang/String;

    move-result-object p0

    if-nez p0, :cond_3

    return v2

    :cond_3
    const-string v0, "EGL_EXT_protected_content"

    .line 145
    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_4

    return v2

    :cond_4
    const-string v0, "EGL_KHR_surfaceless_context"

    .line 151
    invoke-virtual {p0, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_5

    const/4 p0, 0x1

    return p0

    :cond_5
    const/4 p0, 0x2

    return p0
.end method


# virtual methods
.method public final release()V
    .locals 2

    .line 107
    invoke-super {p0}, Landroid/view/Surface;->release()V

    .line 112
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/l/c;->g:Lcom/tkay/expressad/exoplayer/l/c$a;

    monitor-enter v0

    .line 113
    :try_start_0
    iget-boolean v1, p0, Lcom/tkay/expressad/exoplayer/l/c;->h:Z

    if-nez v1, :cond_0

    .line 114
    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/l/c;->g:Lcom/tkay/expressad/exoplayer/l/c$a;

    invoke-virtual {v1}, Lcom/tkay/expressad/exoplayer/l/c$a;->a()V

    const/4 v1, 0x1

    .line 115
    iput-boolean v1, p0, Lcom/tkay/expressad/exoplayer/l/c;->h:Z

    .line 117
    :cond_0
    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v1

    monitor-exit v0

    throw v1
.end method
