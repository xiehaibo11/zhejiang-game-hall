.class public final Lcom/tkay/core/common/l/e;
.super Ljava/lang/Object;


# static fields
.field public static a:Z

.field public static b:Z

.field private static c:Z

.field private static d:Z

.field private static e:Z

.field private static f:Z

.field private static g:Z

.field private static h:Z


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 41
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 55
    sget-boolean v0, Lcom/tkay/core/common/l/e;->c:Z

    if-eqz v0, :cond_0

    .line 56
    invoke-static {p0, p1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    .line 72
    sget-boolean v0, Lcom/tkay/core/common/l/e;->c:Z

    if-eqz v0, :cond_0

    .line 73
    invoke-static {p0, p1, p2}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    .line 182
    sget-boolean v0, Lcom/tkay/core/common/l/e;->f:Z

    if-eqz v0, :cond_0

    .line 183
    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    return-void
.end method

.method private static b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 87
    sget-boolean v0, Lcom/tkay/core/common/l/e;->d:Z

    if-eqz v0, :cond_0

    .line 88
    invoke-static {p0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method private static b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    .line 104
    sget-boolean v0, Lcom/tkay/core/common/l/e;->d:Z

    if-eqz v0, :cond_0

    .line 105
    invoke-static {p0, p1, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    return-void
.end method

.method private static c(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 119
    sget-boolean v0, Lcom/tkay/core/common/l/e;->e:Z

    if-eqz v0, :cond_0

    .line 120
    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method private static c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    .line 136
    sget-boolean v0, Lcom/tkay/core/common/l/e;->e:Z

    if-eqz v0, :cond_0

    .line 137
    invoke-static {p0, p1, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    return-void
.end method

.method private static d(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 151
    sget-boolean v0, Lcom/tkay/core/common/l/e;->f:Z

    if-eqz v0, :cond_0

    .line 152
    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method private static d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    .line 168
    sget-boolean v0, Lcom/tkay/core/common/l/e;->f:Z

    if-eqz v0, :cond_0

    .line 169
    invoke-static {p0, p1, p2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    return-void
.end method

.method private static e(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 197
    sget-boolean v0, Lcom/tkay/core/common/l/e;->g:Z

    if-eqz v0, :cond_0

    .line 198
    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method private static e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    .line 214
    sget-boolean v0, Lcom/tkay/core/common/l/e;->g:Z

    if-eqz v0, :cond_0

    .line 215
    invoke-static {p0, p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    .line 217
    :cond_0
    sget-boolean p0, Lcom/tkay/core/common/l/e;->h:Z

    if-nez p0, :cond_1

    :cond_1
    return-void
.end method
