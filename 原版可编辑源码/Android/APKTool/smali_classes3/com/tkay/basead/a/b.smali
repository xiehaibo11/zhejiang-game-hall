.class public final Lcom/tkay/basead/a/b;
.super Ljava/lang/Object;


# static fields
.field public static final A:I = 0x1b

.field public static final B:I = 0x1c

.field public static final C:I = 0x1d

.field public static final D:I = 0x1e

.field public static final E:I = 0x1f

.field public static final F:I = 0x20

.field public static final G:I = 0x21

.field public static final H:I = 0x22

.field public static final I:I = 0x23

.field public static final a:I = 0x1

.field public static final b:I = 0x2

.field public static final c:I = 0x3

.field public static final d:I = 0x4

.field public static final e:I = 0x5

.field public static final f:I = 0x6

.field public static final g:I = 0x7

.field public static final h:I = 0x8

.field public static final i:I = 0x9

.field public static final j:I = 0xa

.field public static final k:I = 0xb

.field public static final l:I = 0xc

.field public static final m:I = 0xd

.field public static final n:I = 0xe

.field public static final o:I = 0xf

.field public static final p:I = 0x10

.field public static final q:I = 0x11

.field public static final r:I = 0x12

.field public static final s:I = 0x13

.field public static final t:I = 0x14

.field public static final u:I = 0x15

.field public static final v:I = 0x16

.field public static final w:I = 0x17

.field public static final x:I = 0x18

.field public static final y:I = 0x19

.field public static final z:I = 0x1a


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 40
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(ILcom/tkay/core/common/f/h;Lcom/tkay/basead/c/i;)V
    .locals 1

    .line 128
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->L()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 132
    :cond_0
    new-instance v0, Lcom/tkay/basead/a/b$2;

    invoke-direct {v0, p1, p0, p2}, Lcom/tkay/basead/a/b$2;-><init>(Lcom/tkay/core/common/f/h;ILcom/tkay/basead/c/i;)V

    .line 157
    invoke-static {}, Landroid/os/Looper;->getMainLooper()Landroid/os/Looper;

    move-result-object p0

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object p1

    if-eq p0, p1, :cond_1

    .line 158
    invoke-interface {v0}, Ljava/lang/Runnable;->run()V

    return-void

    .line 160
    :cond_1
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method private static a(Lcom/tkay/core/common/f/h;)V
    .locals 3

    .line 228
    instance-of v0, p0, Lcom/tkay/core/common/f/f;

    if-eqz v0, :cond_1

    .line 229
    check-cast p0, Lcom/tkay/core/common/f/f;

    .line 230
    invoke-virtual {p0}, Lcom/tkay/core/common/f/f;->c()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    .line 231
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {p0}, Lcom/tkay/core/common/f/f;->B()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/tkay/core/common/l/h;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v0

    const-string v1, ",packagename:"

    if-eqz v0, :cond_0

    .line 232
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "check offer installed(Apk Install Broadcast):true,dsp offerid:"

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/tkay/core/common/f/f;->U()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/tkay/core/common/f/f;->B()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 233
    invoke-static {}, Lcom/tkay/core/common/a/b;->a()Lcom/tkay/core/common/a/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/a/b;->c(Lcom/tkay/core/common/f/f;)V

    return-void

    .line 235
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v2, "check offer installed(Apk Install Broadcast):false,dsp offerid:"

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/tkay/core/common/f/f;->U()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/tkay/core/common/f/f;->B()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_1
    return-void
.end method

.method public static a(ILcom/tkay/core/common/f/j;)Z
    .locals 3

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-eq p0, v1, :cond_1

    const/4 v2, 0x2

    if-eq p0, v2, :cond_1

    const/4 v2, 0x3

    if-eq p0, v2, :cond_1

    const/4 v2, 0x4

    if-eq p0, v2, :cond_1

    const/4 v2, 0x5

    if-eq p0, v2, :cond_1

    const/16 v2, 0x8

    if-eq p0, v2, :cond_1

    const/16 v2, 0x9

    if-eq p0, v2, :cond_0

    const/16 v2, 0x23

    if-eq p0, v2, :cond_1

    goto :goto_1

    .line 180
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/j;->d()I

    move-result p0

    if-ne p0, v1, :cond_2

    :goto_0
    move v0, v1

    goto :goto_1

    .line 177
    :cond_1
    invoke-virtual {p1}, Lcom/tkay/core/common/f/j;->c()I

    move-result p0

    if-ne p0, v1, :cond_2

    goto :goto_0

    :cond_2
    :goto_1
    return v0
.end method

.method public static a(Landroid/content/Context;Lcom/tkay/core/common/f/h;)Z
    .locals 2

    .line 215
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->z()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    .line 216
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->z()Ljava/lang/String;

    move-result-object v0

    invoke-static {p0, v0, v1}, Lcom/tkay/core/basead/a/a;->a(Landroid/content/Context;Ljava/lang/String;Z)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x1

    return p0

    .line 220
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    .line 221
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->B()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/tkay/basead/a/c;->a(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p0

    return p0

    :cond_1
    return v1
.end method

.method public static a(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/c/d;Ljava/lang/String;Lcom/tkay/core/common/g/b;)Z
    .locals 10

    const/4 v0, 0x0

    .line 97
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tkay/core/common/b/m;->b()Lcom/tkay/core/api/IExHandler;

    move-result-object v2

    if-eqz p3, :cond_0

    .line 98
    iget-object v1, p3, Lcom/tkay/basead/c/d;->c:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object p3, p3, Lcom/tkay/basead/c/d;->c:Ljava/lang/String;

    goto :goto_0

    :cond_0
    const-string p3, ""

    :goto_0
    move-object v7, p3

    if-eqz v2, :cond_1

    .line 100
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v3

    .line 101
    new-instance v8, Lcom/tkay/basead/a/b$1;

    invoke-direct {v8, p2, v3}, Lcom/tkay/basead/a/b$1;-><init>(Lcom/tkay/core/common/f/h;Landroid/content/Context;)V

    move-object v4, p1

    move-object v5, p2

    move-object v6, p4

    move-object v9, p5

    invoke-interface/range {v2 .. v9}, Lcom/tkay/core/api/IExHandler;->handleOfferClick(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Runnable;Lcom/tkay/core/common/g/b;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p0, 0x1

    return p0

    :catchall_0
    :cond_1
    return v0
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;)Z
    .locals 2

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    .line 200
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    goto :goto_0

    .line 204
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p0

    const/16 v1, 0x2000

    .line 205
    invoke-virtual {p0, p1, v1}, Landroid/content/pm/PackageManager;->getApplicationInfo(Ljava/lang/String;I)Landroid/content/pm/ApplicationInfo;
    :try_end_0
    .catch Landroid/content/pm/PackageManager$NameNotFoundException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 p0, 0x1

    return p0

    :catch_0
    :catchall_0
    :cond_1
    :goto_0
    return v0
.end method

.method private static a(Lcom/tkay/core/common/f/h;Lcom/tkay/core/common/f/j;)Z
    .locals 3

    .line 189
    instance-of v0, p0, Lcom/tkay/core/common/f/f;

    const/4 v1, 0x0

    const/4 v2, 0x1

    if-eqz v0, :cond_0

    .line 190
    instance-of p0, p1, Lcom/tkay/core/common/f/aa;

    if-eqz p0, :cond_1

    .line 191
    check-cast p1, Lcom/tkay/core/common/f/aa;

    invoke-virtual {p1}, Lcom/tkay/core/common/f/aa;->Y()I

    move-result p0

    if-ne p0, v2, :cond_1

    :goto_0
    move v1, v2

    goto :goto_1

    .line 193
    :cond_0
    instance-of p1, p0, Lcom/tkay/core/common/f/r;

    if-eqz p1, :cond_1

    .line 194
    check-cast p0, Lcom/tkay/core/common/f/r;

    invoke-virtual {p0}, Lcom/tkay/core/common/f/r;->O()I

    move-result p0

    if-ne p0, v2, :cond_1

    goto :goto_0

    :cond_1
    :goto_1
    return v1
.end method
