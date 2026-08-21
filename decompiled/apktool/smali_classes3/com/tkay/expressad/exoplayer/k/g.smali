.class public final Lcom/tkay/expressad/exoplayer/k/g;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/graphics/SurfaceTexture$OnFrameAvailableListener;
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/exoplayer/k/g$a;,
        Lcom/tkay/expressad/exoplayer/k/g$b;
    }
.end annotation


# static fields
.field public static final a:I = 0x0

.field public static final b:I = 0x1

.field public static final c:I = 0x2

.field private static final d:[I

.field private static final e:I = 0x32c0


# instance fields
.field private final f:Landroid/os/Handler;

.field private final g:[I

.field private h:Landroid/opengl/EGLDisplay;

.field private i:Landroid/opengl/EGLContext;

.field private j:Landroid/opengl/EGLSurface;

.field private k:Landroid/graphics/SurfaceTexture;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    const/16 v0, 0x11

    new-array v0, v0, [I

    .line 50
    fill-array-data v0, :array_0

    sput-object v0, Lcom/tkay/expressad/exoplayer/k/g;->d:[I

    return-void

    :array_0
    .array-data 4
        0x3040
        0x4
        0x3024
        0x8
        0x3023
        0x8
        0x3022
        0x8
        0x3021
        0x8
        0x3025
        0x0
        0x3027
        0x3038
        0x3033
        0x4
        0x3038
    .end array-data
.end method

.method public constructor <init>(Landroid/os/Handler;)V
    .locals 0

    .line 86
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 87
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k/g;->f:Landroid/os/Handler;

    const/4 p1, 0x1

    new-array p1, p1, [I

    .line 88
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k/g;->g:[I

    return-void
.end method

.method private static a(Landroid/opengl/EGLDisplay;)Landroid/opengl/EGLConfig;
    .locals 11

    const/4 v0, 0x1

    new-array v9, v0, [Landroid/opengl/EGLConfig;

    new-array v10, v0, [I

    .line 178
    sget-object v2, Lcom/tkay/expressad/exoplayer/k/g;->d:[I

    const/4 v3, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x1

    const/4 v8, 0x0

    move-object v1, p0

    move-object v4, v9

    move-object v7, v10

    .line 179
    invoke-static/range {v1 .. v8}, Landroid/opengl/EGL14;->eglChooseConfig(Landroid/opengl/EGLDisplay;[II[Landroid/opengl/EGLConfig;II[II)Z

    move-result p0

    const/4 v1, 0x0

    if-eqz p0, :cond_0

    .line 188
    aget v2, v10, v1

    if-lez v2, :cond_0

    aget-object v2, v9, v1

    if-eqz v2, :cond_0

    .line 195
    aget-object p0, v9, v1

    return-object p0

    .line 189
    :cond_0
    new-instance v2, Lcom/tkay/expressad/exoplayer/k/g$a;

    const/4 v3, 0x3

    new-array v3, v3, [Ljava/lang/Object;

    .line 192
    invoke-static {p0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object p0

    aput-object p0, v3, v1

    aget p0, v10, v1

    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    aput-object p0, v3, v0

    const/4 p0, 0x2

    aget-object v0, v9, v1

    aput-object v0, v3, p0

    const-string p0, "eglChooseConfig failed: success=%b, numConfigs[0]=%d, configs[0]=%s"

    .line 190
    invoke-static {p0, v3}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    invoke-direct {v2, p0, v1}, Lcom/tkay/expressad/exoplayer/k/g$a;-><init>(Ljava/lang/String;B)V

    throw v2
.end method

.method private static a(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;I)Landroid/opengl/EGLContext;
    .locals 2

    if-nez p2, :cond_0

    const/4 p2, 0x3

    new-array p2, p2, [I

    .line 202
    fill-array-data p2, :array_0

    goto :goto_0

    :cond_0
    const/4 p2, 0x5

    new-array p2, p2, [I

    .line 204
    fill-array-data p2, :array_1

    .line 213
    :goto_0
    sget-object v0, Landroid/opengl/EGL14;->EGL_NO_CONTEXT:Landroid/opengl/EGLContext;

    const/4 v1, 0x0

    .line 214
    invoke-static {p0, p1, v0, p2, v1}, Landroid/opengl/EGL14;->eglCreateContext(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;Landroid/opengl/EGLContext;[II)Landroid/opengl/EGLContext;

    move-result-object p0

    if-eqz p0, :cond_1

    return-object p0

    .line 217
    :cond_1
    new-instance p0, Lcom/tkay/expressad/exoplayer/k/g$a;

    const-string p1, "eglCreateContext failed"

    invoke-direct {p0, p1, v1}, Lcom/tkay/expressad/exoplayer/k/g$a;-><init>(Ljava/lang/String;B)V

    throw p0

    nop

    :array_0
    .array-data 4
        0x3098
        0x2
        0x3038
    .end array-data

    :array_1
    .array-data 4
        0x3098
        0x2
        0x32c0
        0x1
        0x3038
    .end array-data
.end method

.method private static a(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;Landroid/opengl/EGLContext;I)Landroid/opengl/EGLSurface;
    .locals 2

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-ne p3, v1, :cond_0

    .line 226
    sget-object p1, Landroid/opengl/EGL14;->EGL_NO_SURFACE:Landroid/opengl/EGLSurface;

    goto :goto_1

    :cond_0
    const/4 v1, 0x2

    if-ne p3, v1, :cond_1

    const/4 p3, 0x7

    new-array p3, p3, [I

    .line 230
    fill-array-data p3, :array_0

    goto :goto_0

    :cond_1
    const/4 p3, 0x5

    new-array p3, p3, [I

    .line 241
    fill-array-data p3, :array_1

    .line 248
    :goto_0
    invoke-static {p0, p1, p3, v0}, Landroid/opengl/EGL14;->eglCreatePbufferSurface(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;[II)Landroid/opengl/EGLSurface;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 255
    :goto_1
    invoke-static {p0, p1, p1, p2}, Landroid/opengl/EGL14;->eglMakeCurrent(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;Landroid/opengl/EGLSurface;Landroid/opengl/EGLContext;)Z

    move-result p0

    if-eqz p0, :cond_2

    return-object p1

    .line 257
    :cond_2
    new-instance p0, Lcom/tkay/expressad/exoplayer/k/g$a;

    const-string p1, "eglMakeCurrent failed"

    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/k/g$a;-><init>(Ljava/lang/String;B)V

    throw p0

    .line 250
    :cond_3
    new-instance p0, Lcom/tkay/expressad/exoplayer/k/g$a;

    const-string p1, "eglCreatePbufferSurface failed"

    invoke-direct {p0, p1, v0}, Lcom/tkay/expressad/exoplayer/k/g$a;-><init>(Ljava/lang/String;B)V

    throw p0

    :array_0
    .array-data 4
        0x3057
        0x1
        0x3056
        0x1
        0x32c0
        0x1
        0x3038
    .end array-data

    :array_1
    .array-data 4
        0x3057
        0x1
        0x3056
        0x1
        0x3038
    .end array-data
.end method

.method private static a([I)V
    .locals 4

    const/4 v0, 0x0

    const/4 v1, 0x1

    .line 263
    invoke-static {v1, p0, v0}, Landroid/opengl/GLES20;->glGenTextures(I[II)V

    .line 264
    invoke-static {}, Landroid/opengl/GLES20;->glGetError()I

    move-result p0

    if-nez p0, :cond_0

    return-void

    .line 266
    :cond_0
    new-instance v1, Lcom/tkay/expressad/exoplayer/k/g$a;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "glGenTextures failed. Error: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {p0}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v2, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v1, p0, v0}, Lcom/tkay/expressad/exoplayer/k/g$a;-><init>(Ljava/lang/String;B)V

    throw v1
.end method

.method private static c()Landroid/opengl/EGLDisplay;
    .locals 4

    const/4 v0, 0x0

    .line 161
    invoke-static {v0}, Landroid/opengl/EGL14;->eglGetDisplay(I)Landroid/opengl/EGLDisplay;

    move-result-object v1

    if-eqz v1, :cond_1

    const/4 v2, 0x2

    new-array v2, v2, [I

    const/4 v3, 0x1

    .line 168
    invoke-static {v1, v2, v0, v2, v3}, Landroid/opengl/EGL14;->eglInitialize(Landroid/opengl/EGLDisplay;[II[II)Z

    move-result v2

    if-eqz v2, :cond_0

    return-object v1

    .line 170
    :cond_0
    new-instance v1, Lcom/tkay/expressad/exoplayer/k/g$a;

    const-string v2, "eglInitialize failed"

    invoke-direct {v1, v2, v0}, Lcom/tkay/expressad/exoplayer/k/g$a;-><init>(Ljava/lang/String;B)V

    throw v1

    .line 163
    :cond_1
    new-instance v1, Lcom/tkay/expressad/exoplayer/k/g$a;

    const-string v2, "eglGetDisplay failed"

    invoke-direct {v1, v2, v0}, Lcom/tkay/expressad/exoplayer/k/g$a;-><init>(Ljava/lang/String;B)V

    throw v1
.end method


# virtual methods
.method public final a()V
    .locals 6

    .line 109
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/g;->f:Landroid/os/Handler;

    invoke-virtual {v0, p0}, Landroid/os/Handler;->removeCallbacks(Ljava/lang/Runnable;)V

    const/16 v0, 0x13

    const/4 v1, 0x0

    .line 111
    :try_start_0
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k/g;->k:Landroid/graphics/SurfaceTexture;

    if-eqz v2, :cond_0

    .line 112
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k/g;->k:Landroid/graphics/SurfaceTexture;

    invoke-virtual {v2}, Landroid/graphics/SurfaceTexture;->release()V

    const/4 v2, 0x1

    .line 113
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k/g;->g:[I

    const/4 v4, 0x0

    invoke-static {v2, v3, v4}, Landroid/opengl/GLES20;->glDeleteTextures(I[II)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 116
    :cond_0
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k/g;->h:Landroid/opengl/EGLDisplay;

    if-eqz v2, :cond_1

    sget-object v3, Landroid/opengl/EGL14;->EGL_NO_DISPLAY:Landroid/opengl/EGLDisplay;

    invoke-virtual {v2, v3}, Landroid/opengl/EGLDisplay;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_1

    .line 117
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k/g;->h:Landroid/opengl/EGLDisplay;

    sget-object v3, Landroid/opengl/EGL14;->EGL_NO_SURFACE:Landroid/opengl/EGLSurface;

    sget-object v4, Landroid/opengl/EGL14;->EGL_NO_CONTEXT:Landroid/opengl/EGLContext;

    invoke-static {v2, v3, v3, v4}, Landroid/opengl/EGL14;->eglMakeCurrent(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;Landroid/opengl/EGLSurface;Landroid/opengl/EGLContext;)Z

    .line 120
    :cond_1
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k/g;->j:Landroid/opengl/EGLSurface;

    if-eqz v2, :cond_2

    sget-object v3, Landroid/opengl/EGL14;->EGL_NO_SURFACE:Landroid/opengl/EGLSurface;

    invoke-virtual {v2, v3}, Landroid/opengl/EGLSurface;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_2

    .line 121
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k/g;->h:Landroid/opengl/EGLDisplay;

    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k/g;->j:Landroid/opengl/EGLSurface;

    invoke-static {v2, v3}, Landroid/opengl/EGL14;->eglDestroySurface(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;)Z

    .line 123
    :cond_2
    iget-object v2, p0, Lcom/tkay/expressad/exoplayer/k/g;->i:Landroid/opengl/EGLContext;

    if-eqz v2, :cond_3

    .line 124
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k/g;->h:Landroid/opengl/EGLDisplay;

    invoke-static {v3, v2}, Landroid/opengl/EGL14;->eglDestroyContext(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLContext;)Z

    .line 127
    :cond_3
    sget v2, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-lt v2, v0, :cond_4

    .line 128
    invoke-static {}, Landroid/opengl/EGL14;->eglReleaseThread()Z

    .line 130
    :cond_4
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/k/g;->h:Landroid/opengl/EGLDisplay;

    .line 131
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/k/g;->i:Landroid/opengl/EGLContext;

    .line 132
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/k/g;->j:Landroid/opengl/EGLSurface;

    .line 133
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/k/g;->k:Landroid/graphics/SurfaceTexture;

    return-void

    :catchall_0
    move-exception v2

    .line 116
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k/g;->h:Landroid/opengl/EGLDisplay;

    if-eqz v3, :cond_5

    sget-object v4, Landroid/opengl/EGL14;->EGL_NO_DISPLAY:Landroid/opengl/EGLDisplay;

    invoke-virtual {v3, v4}, Landroid/opengl/EGLDisplay;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_5

    .line 117
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k/g;->h:Landroid/opengl/EGLDisplay;

    sget-object v4, Landroid/opengl/EGL14;->EGL_NO_SURFACE:Landroid/opengl/EGLSurface;

    sget-object v5, Landroid/opengl/EGL14;->EGL_NO_CONTEXT:Landroid/opengl/EGLContext;

    invoke-static {v3, v4, v4, v5}, Landroid/opengl/EGL14;->eglMakeCurrent(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;Landroid/opengl/EGLSurface;Landroid/opengl/EGLContext;)Z

    .line 120
    :cond_5
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k/g;->j:Landroid/opengl/EGLSurface;

    if-eqz v3, :cond_6

    sget-object v4, Landroid/opengl/EGL14;->EGL_NO_SURFACE:Landroid/opengl/EGLSurface;

    invoke-virtual {v3, v4}, Landroid/opengl/EGLSurface;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-nez v3, :cond_6

    .line 121
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k/g;->h:Landroid/opengl/EGLDisplay;

    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/k/g;->j:Landroid/opengl/EGLSurface;

    invoke-static {v3, v4}, Landroid/opengl/EGL14;->eglDestroySurface(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;)Z

    .line 123
    :cond_6
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k/g;->i:Landroid/opengl/EGLContext;

    if-eqz v3, :cond_7

    .line 124
    iget-object v4, p0, Lcom/tkay/expressad/exoplayer/k/g;->h:Landroid/opengl/EGLDisplay;

    invoke-static {v4, v3}, Landroid/opengl/EGL14;->eglDestroyContext(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLContext;)Z

    .line 127
    :cond_7
    sget v3, Lcom/tkay/expressad/exoplayer/k/af;->a:I

    if-lt v3, v0, :cond_8

    .line 128
    invoke-static {}, Landroid/opengl/EGL14;->eglReleaseThread()Z

    .line 130
    :cond_8
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/k/g;->h:Landroid/opengl/EGLDisplay;

    .line 131
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/k/g;->i:Landroid/opengl/EGLContext;

    .line 132
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/k/g;->j:Landroid/opengl/EGLSurface;

    .line 133
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/k/g;->k:Landroid/graphics/SurfaceTexture;

    .line 134
    throw v2
.end method

.method public final a(I)V
    .locals 13

    const/4 v0, 0x0

    .line 1161
    invoke-static {v0}, Landroid/opengl/EGL14;->eglGetDisplay(I)Landroid/opengl/EGLDisplay;

    move-result-object v1

    if-eqz v1, :cond_9

    const/4 v9, 0x2

    new-array v2, v9, [I

    const/4 v10, 0x1

    .line 1168
    invoke-static {v1, v2, v0, v2, v10}, Landroid/opengl/EGL14;->eglInitialize(Landroid/opengl/EGLDisplay;[II[II)Z

    move-result v2

    if-eqz v2, :cond_8

    .line 97
    iput-object v1, p0, Lcom/tkay/expressad/exoplayer/k/g;->h:Landroid/opengl/EGLDisplay;

    new-array v11, v10, [Landroid/opengl/EGLConfig;

    new-array v12, v10, [I

    .line 1178
    sget-object v2, Lcom/tkay/expressad/exoplayer/k/g;->d:[I

    const/4 v3, 0x0

    const/4 v5, 0x0

    const/4 v6, 0x1

    const/4 v8, 0x0

    move-object v4, v11

    move-object v7, v12

    .line 1179
    invoke-static/range {v1 .. v8}, Landroid/opengl/EGL14;->eglChooseConfig(Landroid/opengl/EGLDisplay;[II[Landroid/opengl/EGLConfig;II[II)Z

    move-result v1

    const/4 v2, 0x3

    if-eqz v1, :cond_7

    .line 1188
    aget v3, v12, v0

    if-lez v3, :cond_7

    aget-object v3, v11, v0

    if-eqz v3, :cond_7

    .line 1195
    aget-object v1, v11, v0

    .line 99
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k/g;->h:Landroid/opengl/EGLDisplay;

    const/4 v4, 0x5

    if-nez p1, :cond_0

    new-array v2, v2, [I

    .line 1202
    fill-array-data v2, :array_0

    goto :goto_0

    :cond_0
    new-array v2, v4, [I

    .line 1204
    fill-array-data v2, :array_1

    .line 1213
    :goto_0
    sget-object v5, Landroid/opengl/EGL14;->EGL_NO_CONTEXT:Landroid/opengl/EGLContext;

    .line 1214
    invoke-static {v3, v1, v5, v2, v0}, Landroid/opengl/EGL14;->eglCreateContext(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;Landroid/opengl/EGLContext;[II)Landroid/opengl/EGLContext;

    move-result-object v2

    if-eqz v2, :cond_6

    .line 99
    iput-object v2, p0, Lcom/tkay/expressad/exoplayer/k/g;->i:Landroid/opengl/EGLContext;

    .line 100
    iget-object v3, p0, Lcom/tkay/expressad/exoplayer/k/g;->h:Landroid/opengl/EGLDisplay;

    if-ne p1, v10, :cond_1

    .line 1226
    sget-object p1, Landroid/opengl/EGL14;->EGL_NO_SURFACE:Landroid/opengl/EGLSurface;

    goto :goto_2

    :cond_1
    if-ne p1, v9, :cond_2

    const/4 p1, 0x7

    new-array p1, p1, [I

    .line 1230
    fill-array-data p1, :array_2

    goto :goto_1

    :cond_2
    new-array p1, v4, [I

    .line 1241
    fill-array-data p1, :array_3

    .line 1248
    :goto_1
    invoke-static {v3, v1, p1, v0}, Landroid/opengl/EGL14;->eglCreatePbufferSurface(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;[II)Landroid/opengl/EGLSurface;

    move-result-object p1

    if-eqz p1, :cond_5

    .line 1255
    :goto_2
    invoke-static {v3, p1, p1, v2}, Landroid/opengl/EGL14;->eglMakeCurrent(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLSurface;Landroid/opengl/EGLSurface;Landroid/opengl/EGLContext;)Z

    move-result v1

    if-eqz v1, :cond_4

    .line 100
    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k/g;->j:Landroid/opengl/EGLSurface;

    .line 101
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k/g;->g:[I

    .line 1263
    invoke-static {v10, p1, v0}, Landroid/opengl/GLES20;->glGenTextures(I[II)V

    .line 1264
    invoke-static {}, Landroid/opengl/GLES20;->glGetError()I

    move-result p1

    if-nez p1, :cond_3

    .line 102
    new-instance p1, Landroid/graphics/SurfaceTexture;

    iget-object v1, p0, Lcom/tkay/expressad/exoplayer/k/g;->g:[I

    aget v0, v1, v0

    invoke-direct {p1, v0}, Landroid/graphics/SurfaceTexture;-><init>(I)V

    iput-object p1, p0, Lcom/tkay/expressad/exoplayer/k/g;->k:Landroid/graphics/SurfaceTexture;

    .line 103
    invoke-virtual {p1, p0}, Landroid/graphics/SurfaceTexture;->setOnFrameAvailableListener(Landroid/graphics/SurfaceTexture$OnFrameAvailableListener;)V

    return-void

    .line 1266
    :cond_3
    new-instance v1, Lcom/tkay/expressad/exoplayer/k/g$a;

    new-instance v2, Ljava/lang/StringBuilder;

    const-string v3, "glGenTextures failed. Error: "

    invoke-direct {v2, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {p1}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-direct {v1, p1, v0}, Lcom/tkay/expressad/exoplayer/k/g$a;-><init>(Ljava/lang/String;B)V

    throw v1

    .line 1257
    :cond_4
    new-instance p1, Lcom/tkay/expressad/exoplayer/k/g$a;

    const-string v1, "eglMakeCurrent failed"

    invoke-direct {p1, v1, v0}, Lcom/tkay/expressad/exoplayer/k/g$a;-><init>(Ljava/lang/String;B)V

    throw p1

    .line 1250
    :cond_5
    new-instance p1, Lcom/tkay/expressad/exoplayer/k/g$a;

    const-string v1, "eglCreatePbufferSurface failed"

    invoke-direct {p1, v1, v0}, Lcom/tkay/expressad/exoplayer/k/g$a;-><init>(Ljava/lang/String;B)V

    throw p1

    .line 1217
    :cond_6
    new-instance p1, Lcom/tkay/expressad/exoplayer/k/g$a;

    const-string v1, "eglCreateContext failed"

    invoke-direct {p1, v1, v0}, Lcom/tkay/expressad/exoplayer/k/g$a;-><init>(Ljava/lang/String;B)V

    throw p1

    .line 1189
    :cond_7
    new-instance p1, Lcom/tkay/expressad/exoplayer/k/g$a;

    new-array v2, v2, [Ljava/lang/Object;

    .line 1192
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    aput-object v1, v2, v0

    aget v1, v12, v0

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    aput-object v1, v2, v10

    aget-object v1, v11, v0

    aput-object v1, v2, v9

    const-string v1, "eglChooseConfig failed: success=%b, numConfigs[0]=%d, configs[0]=%s"

    .line 1190
    invoke-static {v1, v2}, Lcom/tkay/expressad/exoplayer/k/af;->a(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    invoke-direct {p1, v1, v0}, Lcom/tkay/expressad/exoplayer/k/g$a;-><init>(Ljava/lang/String;B)V

    throw p1

    .line 1170
    :cond_8
    new-instance p1, Lcom/tkay/expressad/exoplayer/k/g$a;

    const-string v1, "eglInitialize failed"

    invoke-direct {p1, v1, v0}, Lcom/tkay/expressad/exoplayer/k/g$a;-><init>(Ljava/lang/String;B)V

    throw p1

    .line 1163
    :cond_9
    new-instance p1, Lcom/tkay/expressad/exoplayer/k/g$a;

    const-string v1, "eglGetDisplay failed"

    invoke-direct {p1, v1, v0}, Lcom/tkay/expressad/exoplayer/k/g$a;-><init>(Ljava/lang/String;B)V

    throw p1

    nop

    :array_0
    .array-data 4
        0x3098
        0x2
        0x3038
    .end array-data

    :array_1
    .array-data 4
        0x3098
        0x2
        0x32c0
        0x1
        0x3038
    .end array-data

    :array_2
    .array-data 4
        0x3057
        0x1
        0x3056
        0x1
        0x32c0
        0x1
        0x3038
    .end array-data

    :array_3
    .array-data 4
        0x3057
        0x1
        0x3056
        0x1
        0x3038
    .end array-data
.end method

.method public final b()Landroid/graphics/SurfaceTexture;
    .locals 1

    .line 141
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/g;->k:Landroid/graphics/SurfaceTexture;

    invoke-static {v0}, Lcom/tkay/expressad/exoplayer/k/a;->a(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/graphics/SurfaceTexture;

    return-object v0
.end method

.method public final onFrameAvailable(Landroid/graphics/SurfaceTexture;)V
    .locals 0

    .line 148
    iget-object p1, p0, Lcom/tkay/expressad/exoplayer/k/g;->f:Landroid/os/Handler;

    invoke-virtual {p1, p0}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    return-void
.end method

.method public final run()V
    .locals 1

    .line 155
    iget-object v0, p0, Lcom/tkay/expressad/exoplayer/k/g;->k:Landroid/graphics/SurfaceTexture;

    if-eqz v0, :cond_0

    .line 156
    invoke-virtual {v0}, Landroid/graphics/SurfaceTexture;->updateTexImage()V

    :cond_0
    return-void
.end method
