.class public final Lcom/tkay/expressad/foundation/h/o;
.super Ljava/lang/Object;


# static fields
.field public static a:Z = true

.field public static b:Z = true

.field public static c:Z = true

.field public static d:Z = true

.field public static e:Z = true

.field public static f:Z = false

.field public static g:Z = true

.field public static h:Z = false

.field private static final i:Ljava/lang/String; = "tkay_"


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 23
    sget-boolean v0, Lcom/tkay/expressad/b;->a:Z

    if-nez v0, :cond_0

    const/4 v0, 0x0

    .line 24
    sput-boolean v0, Lcom/tkay/expressad/foundation/h/o;->a:Z

    .line 25
    sput-boolean v0, Lcom/tkay/expressad/foundation/h/o;->b:Z

    .line 26
    sput-boolean v0, Lcom/tkay/expressad/foundation/h/o;->c:Z

    .line 27
    sput-boolean v0, Lcom/tkay/expressad/foundation/h/o;->d:Z

    .line 28
    sput-boolean v0, Lcom/tkay/expressad/foundation/h/o;->e:Z

    .line 29
    sput-boolean v0, Lcom/tkay/expressad/foundation/h/o;->f:Z

    .line 30
    sput-boolean v0, Lcom/tkay/expressad/foundation/h/o;->g:Z

    .line 31
    sput-boolean v0, Lcom/tkay/expressad/foundation/h/o;->h:Z

    :cond_0
    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private static a(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 213
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 214
    invoke-static {p0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p0

    const-string v0, "tkay_"

    invoke-virtual {v0, p0}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    :cond_0
    return-object p0
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;)V
    .locals 1

    .line 207
    sget-boolean v0, Lcom/tkay/expressad/foundation/h/o;->f:Z

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    .line 208
    invoke-static {p0, p1, v0}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p0

    invoke-virtual {p0}, Landroid/widget/Toast;->show()V

    :cond_0
    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 47
    sget-boolean v0, Lcom/tkay/expressad/foundation/h/o;->a:Z

    if-eqz v0, :cond_0

    .line 48
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 49
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/o;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p1}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    .line 63
    sget-boolean v0, Lcom/tkay/expressad/foundation/h/o;->a:Z

    if-eqz v0, :cond_0

    .line 64
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 65
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/o;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p1, p2}, Landroid/util/Log;->v(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    .line 172
    sget-boolean v0, Lcom/tkay/expressad/foundation/h/o;->d:Z

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    .line 174
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/o;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    return-void
.end method

.method private static b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 78
    sget-boolean v0, Lcom/tkay/expressad/foundation/h/o;->b:Z

    if-eqz v0, :cond_0

    .line 79
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 80
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/o;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p1}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method private static b(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    .line 94
    sget-boolean v0, Lcom/tkay/expressad/foundation/h/o;->b:Z

    if-eqz v0, :cond_0

    .line 95
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 96
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/o;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p1, p2}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    return-void
.end method

.method private static c(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 109
    sget-boolean v0, Lcom/tkay/expressad/foundation/h/o;->c:Z

    if-eqz v0, :cond_0

    .line 110
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 111
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/o;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method private static c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    .line 125
    sget-boolean v0, Lcom/tkay/expressad/foundation/h/o;->c:Z

    if-eqz v0, :cond_0

    .line 126
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 127
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/o;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p1, p2}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    return-void
.end method

.method private static d(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 140
    sget-boolean v0, Lcom/tkay/expressad/foundation/h/o;->d:Z

    if-eqz v0, :cond_0

    .line 141
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 142
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/o;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method private static d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    .line 156
    sget-boolean v0, Lcom/tkay/expressad/foundation/h/o;->d:Z

    if-eqz v0, :cond_0

    .line 157
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 158
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/o;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p1, p2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    return-void
.end method

.method private static e(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 187
    sget-boolean v0, Lcom/tkay/expressad/foundation/h/o;->e:Z

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    .line 188
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/o;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-void
.end method

.method private static e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    .line 201
    sget-boolean v0, Lcom/tkay/expressad/foundation/h/o;->e:Z

    if-eqz v0, :cond_0

    if-eqz p1, :cond_0

    .line 202
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/o;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0, p1, p2}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_0
    return-void
.end method
