.class public Lcom/igexin/push/extension/distribution/basic/a/a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/push/core/a/a/a;


# static fields
.field private static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "EXT-"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-class v1, Lcom/igexin/push/extension/distribution/basic/a/a;

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/igexin/push/extension/distribution/basic/a/a;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a()I
    .locals 2

    :try_start_0
    const-string v0, "com.android.internal.R$id"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v1, "icon"

    invoke-virtual {v0, v1}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Ljava/lang/reflect/Field;->getInt(Ljava/lang/Object;)I

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private a(Lcom/igexin/push/extension/distribution/basic/b/a;Z)I
    .locals 6

    const-string v0, "mipmap"

    const-string v1, "drawable"

    if-eqz p2, :cond_2

    sget-object p2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {p2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    sget-object v2, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    const-string v3, "push_small"

    invoke-virtual {p2, v3, v1, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    if-nez p2, :cond_0

    sget-object p2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {p2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    sget-object v2, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-virtual {p2, v3, v0, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    :cond_0
    const/4 v2, 0x0

    if-eqz p2, :cond_1

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v0, Lcom/igexin/push/extension/distribution/basic/a/a;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "|push_small.png is set, use default push_small"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    new-array v0, v2, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return p2

    :cond_1
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/extension/distribution/basic/a/a;->a:Ljava/lang/String;

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|push_small.png is missing"

    invoke-virtual {p2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    new-array v2, v2, [Ljava/lang/Object;

    invoke-static {p2, v2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    sget-object p2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {p2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    sget-object v2, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    const-string v3, "push"

    invoke-virtual {p2, v3, v1, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    if-nez p2, :cond_3

    sget-object p2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {p2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    sget-object v2, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-virtual {p2, v3, v0, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    :cond_3
    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->p()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    const v3, 0x1080093

    if-eqz v2, :cond_5

    if-eqz p2, :cond_4

    goto :goto_0

    :cond_4
    move p2, v3

    :goto_0
    return p2

    :cond_5
    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->p()Ljava/lang/String;

    move-result-object v2

    const-string v4, "null"

    invoke-virtual {v4, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_6

    return v3

    :cond_6
    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->p()Ljava/lang/String;

    move-result-object v2

    const-string v4, "@"

    invoke-virtual {v2, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_8

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->p()Ljava/lang/String;

    move-result-object p1

    const/4 p2, 0x1

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    invoke-virtual {p1, p2, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p1

    const-string p2, "email"

    invoke-virtual {p1, p2}, Ljava/lang/String;->endsWith(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_7

    const v3, 0x108008f

    :cond_7
    return v3

    :cond_8
    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v2

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->p()Ljava/lang/String;

    move-result-object v4

    sget-object v5, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-virtual {v2, v4, v1, v5}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    if-nez v1, :cond_9

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->p()Ljava/lang/String;

    move-result-object p1

    sget-object v2, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-virtual {v1, p1, v0, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    :cond_9
    if-eqz v1, :cond_a

    return v1

    :cond_a
    if-eqz p2, :cond_b

    return p2

    :cond_b
    return v3
.end method

.method private a(Ljava/lang/String;)I
    .locals 3

    const/4 v0, 0x0

    move v1, v0

    :goto_0
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v2

    if-eq v0, v2, :cond_0

    mul-int/lit16 v1, v1, 0x83

    invoke-virtual {p1, v0}, Ljava/lang/String;->charAt(I)C

    move-result v2

    add-int/2addr v1, v2

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    const/high16 p1, -0x80000000

    if-ne v1, p1, :cond_1

    const/4 v1, 0x1

    :cond_1
    invoke-static {v1}, Ljava/lang/Math;->abs(I)I

    move-result p1

    return p1
.end method

.method private a(Lcom/igexin/push/extension/distribution/basic/b/a;)Landroid/app/Notification$Builder;
    .locals 14

    const-string v0, "android.app.NotificationChannel"

    new-instance v1, Landroid/app/Notification$Builder;

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-direct {v1, v2}, Landroid/app/Notification$Builder;-><init>(Landroid/content/Context;)V

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    const-string v3, "notification"

    invoke-virtual {v2, v3}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/app/NotificationManager;

    :try_start_0
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    const/4 v4, 0x3

    new-array v5, v4, [Ljava/lang/Class;

    const-class v6, Ljava/lang/String;

    const/4 v7, 0x0

    aput-object v6, v5, v7

    const-class v6, Ljava/lang/CharSequence;

    const/4 v8, 0x1

    aput-object v6, v5, v8

    sget-object v6, Ljava/lang/Integer;->TYPE:Ljava/lang/Class;

    const/4 v9, 0x2

    aput-object v6, v5, v9

    invoke-virtual {v3, v5}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v5

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->g()Z

    move-result v6

    if-eqz v6, :cond_0

    const/4 v6, 0x4

    goto :goto_0

    :cond_0
    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->d()I

    move-result v6

    :goto_0
    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v10

    const-string v11, "getNotificationChannel"

    new-array v12, v8, [Ljava/lang/Class;

    const-class v13, Ljava/lang/String;

    aput-object v13, v12, v7

    invoke-virtual {v10, v11, v12}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v11

    new-array v12, v8, [Ljava/lang/Object;

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->b()Ljava/lang/String;

    move-result-object v13

    aput-object v13, v12, v7

    invoke-virtual {v11, v2, v12}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v11

    check-cast v11, Landroid/os/Parcelable;

    if-nez v11, :cond_3

    new-array v4, v4, [Ljava/lang/Object;

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->b()Ljava/lang/String;

    move-result-object v11

    aput-object v11, v4, v7

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->c()Ljava/lang/String;

    move-result-object v11

    aput-object v11, v4, v8

    invoke-static {v6}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v6

    aput-object v6, v4, v9

    invoke-virtual {v5, v4}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/os/Parcelable;

    const-string v5, "createNotificationChannel"

    new-array v6, v8, [Ljava/lang/Class;

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    aput-object v0, v6, v7

    invoke-virtual {v10, v5, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    const-string v5, "enableVibration"

    new-array v6, v8, [Ljava/lang/Class;

    sget-object v10, Ljava/lang/Boolean;->TYPE:Ljava/lang/Class;

    aput-object v10, v6, v7

    invoke-virtual {v3, v5, v6}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v5

    const-string v6, "setSound"

    new-array v10, v9, [Ljava/lang/Class;

    const-class v11, Landroid/net/Uri;

    aput-object v11, v10, v7

    const-class v11, Landroid/media/AudioAttributes;

    aput-object v11, v10, v8

    invoke-virtual {v3, v6, v10}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    new-array v6, v8, [Ljava/lang/Object;

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->x()Z

    move-result v10

    invoke-static {v10}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v10

    aput-object v10, v6, v7

    invoke-virtual {v5, v4, v6}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->y()Z

    move-result v5

    const/4 v6, 0x0

    if-eqz v5, :cond_1

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->z()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_2

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->z()Ljava/lang/String;

    move-result-object v5

    invoke-direct {p0, v5}, Lcom/igexin/push/extension/distribution/basic/a/a;->b(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v5

    new-array v9, v9, [Ljava/lang/Object;

    aput-object v5, v9, v7

    aput-object v6, v9, v8

    invoke-virtual {v3, v4, v9}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_1

    :cond_1
    new-array v5, v9, [Ljava/lang/Object;

    aput-object v6, v5, v7

    aput-object v6, v5, v8

    invoke-virtual {v3, v4, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    :goto_1
    new-array v3, v8, [Ljava/lang/Object;

    aput-object v4, v3, v7

    invoke-virtual {v0, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    :cond_3
    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    const-string v2, "setChannelId"

    new-array v3, v8, [Ljava/lang/Class;

    const-class v4, Ljava/lang/String;

    aput-object v4, v3, v7

    invoke-virtual {v0, v2, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v2, v8, [Ljava/lang/Object;

    invoke-virtual {p1}, Lcom/igexin/push/extension/distribution/basic/b/a;->b()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v2, v7

    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-object v1
.end method

.method private a(Landroid/app/Notification;Lcom/igexin/push/extension/distribution/basic/b/a;)Landroid/app/Notification;
    .locals 2

    const/4 v0, 0x4

    iput v0, p1, Landroid/app/Notification;->defaults:I

    const v0, -0xff0100

    iput v0, p1, Landroid/app/Notification;->ledARGB:I

    const/16 v0, 0x3e8

    iput v0, p1, Landroid/app/Notification;->ledOnMS:I

    const/16 v0, 0xbb8

    iput v0, p1, Landroid/app/Notification;->ledOffMS:I

    const/4 v0, 0x1

    iput v0, p1, Landroid/app/Notification;->flags:I

    invoke-virtual {p2}, Lcom/igexin/push/extension/distribution/basic/b/a;->y()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-virtual {p2}, Lcom/igexin/push/extension/distribution/basic/b/a;->z()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    iget v1, p1, Landroid/app/Notification;->defaults:I

    or-int/2addr v1, v0

    iput v1, p1, Landroid/app/Notification;->defaults:I

    goto :goto_0

    :cond_0
    invoke-virtual {p2}, Lcom/igexin/push/extension/distribution/basic/b/a;->z()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/igexin/push/extension/distribution/basic/a/a;->b(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v1

    iput-object v1, p1, Landroid/app/Notification;->sound:Landroid/net/Uri;

    :cond_1
    :goto_0
    invoke-virtual {p2}, Lcom/igexin/push/extension/distribution/basic/b/a;->B()Z

    move-result v1

    if-eqz v1, :cond_2

    iget v1, p1, Landroid/app/Notification;->flags:I

    or-int/lit8 v1, v1, 0x10

    goto :goto_1

    :cond_2
    iget v1, p1, Landroid/app/Notification;->flags:I

    or-int/lit8 v1, v1, 0x20

    :goto_1
    iput v1, p1, Landroid/app/Notification;->flags:I

    invoke-virtual {p2}, Lcom/igexin/push/extension/distribution/basic/b/a;->x()Z

    move-result v1

    if-eqz v1, :cond_3

    iget v1, p1, Landroid/app/Notification;->defaults:I

    or-int/lit8 v1, v1, 0x2

    iput v1, p1, Landroid/app/Notification;->defaults:I

    :cond_3
    invoke-direct {p0, p2, v0}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Lcom/igexin/push/extension/distribution/basic/b/a;Z)I

    move-result p2

    iput p2, p1, Landroid/app/Notification;->icon:I

    return-object p1
.end method

.method private a(Landroid/content/Intent;)Landroid/app/PendingIntent;
    .locals 4

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {v0}, Lcom/igexin/push/extension/distribution/basic/g/d;->a(Landroid/content/Context;)I

    move-result v0

    const/16 v1, 0x1f

    if-lt v0, v1, :cond_0

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x1e

    if-lt v0, v1, :cond_0

    const/high16 v0, 0x4000000

    goto :goto_0

    :cond_0
    const/high16 v0, 0x8000000

    :goto_0
    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    new-instance v2, Ljava/util/Random;

    invoke-direct {v2}, Ljava/util/Random;-><init>()V

    const/16 v3, 0x3e8

    invoke-virtual {v2, v3}, Ljava/util/Random;->nextInt(I)I

    move-result v2

    invoke-static {v1, v2, p1, v0}, Landroid/app/PendingIntent;->getService(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p1

    return-object p1
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;ILcom/igexin/push/extension/distribution/basic/b/a;Z)Landroid/app/PendingIntent;
    .locals 4

    new-instance v0, Landroid/content/Intent;

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/c/b;->a:Ljava/lang/String;

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "taskid"

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "messageid"

    invoke-virtual {v0, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    sget-object p1, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    const-string p2, "appid"

    invoke-virtual {v0, p2, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-virtual {p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->getDoActionId()Ljava/lang/String;

    move-result-object p1

    const-string p2, "actionid"

    invoke-virtual {v0, p2, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    sget-object p1, Lcom/igexin/push/extension/distribution/basic/c/e;->d:Ljava/lang/String;

    const-string p2, "accesstoken"

    invoke-virtual {v0, p2, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "notifID"

    invoke-virtual {v0, p1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->u()I

    move-result p2

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, ""

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p3, "notifyStyle"

    invoke-virtual {v0, p3, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->f()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p3, "id"

    invoke-virtual {v0, p3, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->i()I

    move-result p3

    invoke-virtual {p1, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string p3, "bigStyle"

    invoke-virtual {v0, p3, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "isFloat"

    invoke-virtual {v0, p1, p5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    sget-object p1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {p1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object p1

    const-string p3, "checkpackage"

    invoke-virtual {v0, p3, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-virtual {p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->getActionId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->getActionId()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/String;->length()I

    move-result p3

    add-int/lit8 p3, p3, -0x1

    invoke-virtual {p1, p3}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    const-string p3, "feedbackid"

    invoke-virtual {v0, p3, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-virtual {p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->n()Ljava/lang/String;

    move-result-object p1

    if-nez p1, :cond_0

    move-object p1, p2

    :cond_0
    const-string p3, "title"

    invoke-virtual {v0, p3, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-virtual {p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->o()Ljava/lang/String;

    move-result-object p1

    if-nez p1, :cond_1

    goto :goto_0

    :cond_1
    move-object p2, p1

    :goto_0
    const-string p1, "content"

    invoke-virtual {v0, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "4.6.4.0"

    const-string p2, "2.11.0.0"

    invoke-static {p1, p2}, Lcom/igexin/push/extension/distribution/basic/g/c;->a(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    const/high16 p2, 0x8000000

    const/16 p3, 0x3e8

    if-gez p1, :cond_2

    sget-object p1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    new-instance p4, Ljava/util/Random;

    invoke-direct {p4}, Ljava/util/Random;-><init>()V

    invoke-virtual {p4, p3}, Ljava/util/Random;->nextInt(I)I

    move-result p3

    invoke-static {p1, p3, v0, p2}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p1

    return-object p1

    :cond_2
    sget-object p1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {p1}, Lcom/igexin/push/extension/distribution/basic/g/d;->a(Landroid/content/Context;)I

    move-result p1

    const/16 p4, 0x1f

    const-string p5, "broadcast_intent"

    const-string v1, "com.igexin.action.notification.click"

    const-string v2, "action"

    if-lt p1, p4, :cond_3

    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 p4, 0x1e

    if-lt p1, p4, :cond_3

    const/high16 p1, 0x4000000

    :try_start_0
    new-instance p2, Landroid/content/Intent;

    sget-object p4, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    const-string v3, "com.igexin.sdk.GetuiActivity"

    invoke-static {v3}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    invoke-direct {p2, p4, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 p4, 0x10000000

    invoke-virtual {p2, p4}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    invoke-virtual {p2, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-virtual {p2, p5, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;
    :try_end_0
    .catch Ljava/lang/ClassNotFoundException; {:try_start_0 .. :try_end_0} :catch_0

    sget-object p4, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    new-instance p5, Ljava/util/Random;

    invoke-direct {p5}, Ljava/util/Random;-><init>()V

    invoke-virtual {p5, p3}, Ljava/util/Random;->nextInt(I)I

    move-result p3

    invoke-static {p4, p3, p2, p1}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p1

    return-object p1

    :catch_0
    sget-object p2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    new-instance p4, Ljava/util/Random;

    invoke-direct {p4}, Ljava/util/Random;-><init>()V

    invoke-virtual {p4, p3}, Ljava/util/Random;->nextInt(I)I

    move-result p3

    invoke-static {p2, p3, v0, p1}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p1

    return-object p1

    :cond_3
    :try_start_1
    new-instance p1, Landroid/content/Intent;

    sget-object p4, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    sget-object v3, Lcom/igexin/push/extension/distribution/basic/c/e;->a:Landroid/content/Context;

    invoke-static {v3}, Lcom/igexin/push/extension/distribution/basic/g/e;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    invoke-direct {p1, p4, v3}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {p1, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-virtual {p1, p5, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    invoke-direct {p0, p1}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Landroid/content/Intent;)Landroid/app/PendingIntent;

    move-result-object p1

    return-object p1

    :catchall_0
    sget-object p1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    new-instance p4, Ljava/util/Random;

    invoke-direct {p4}, Ljava/util/Random;-><init>()V

    invoke-virtual {p4, p3}, Ljava/util/Random;->nextInt(I)I

    move-result p3

    invoke-static {p1, p3, v0, p2}, Landroid/app/PendingIntent;->getBroadcast(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p1

    return-object p1
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILcom/igexin/push/extension/distribution/basic/b/a;Z)Landroid/app/PendingIntent;
    .locals 2

    const-string p4, ""

    :try_start_0
    new-instance p6, Landroid/content/Intent;

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/c/e;->a:Landroid/content/Context;

    invoke-static {v1}, Lcom/igexin/push/extension/distribution/basic/g/e;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    invoke-direct {p6, v0, v1}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string v0, "taskid"

    invoke-virtual {p6, v0, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "messageid"

    invoke-virtual {p6, p2, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "appid"

    sget-object p3, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-virtual {p6, p2, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "appkey"

    invoke-virtual {p6, p2, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "actionid"

    invoke-virtual {p5}, Lcom/igexin/push/extension/distribution/basic/b/a;->getDoActionId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p6, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "notifyStyle"

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p5}, Lcom/igexin/push/extension/distribution/basic/b/a;->u()I

    move-result p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p6, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "id"

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p5}, Lcom/igexin/push/extension/distribution/basic/b/a;->f()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p6, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "feedbackid"

    invoke-virtual {p5}, Lcom/igexin/push/extension/distribution/basic/b/a;->getActionId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p5}, Lcom/igexin/push/extension/distribution/basic/b/a;->getActionId()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/String;->length()I

    move-result p3

    add-int/lit8 p3, p3, -0x1

    invoke-virtual {p2, p3}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p6, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "action"

    const-string p2, "com.igexin.action.notification.delete"

    invoke-virtual {p6, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-direct {p0, p6}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Landroid/content/Intent;)Landroid/app/PendingIntent;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object p3, Lcom/igexin/push/extension/distribution/basic/a/a;->a:Ljava/lang/String;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, "|getDelPendingIntent err\uff1a"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Exception;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 p2, 0x0

    new-array p2, p2, [Ljava/lang/Object;

    invoke-static {p1, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 p1, 0x0

    return-object p1
.end method

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 13

    move-object v1, p0

    const-string v2, "4.6.4.0"

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v3, 0x0

    const v4, 0x71603a60

    const/4 v5, 0x0

    :try_start_0
    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-direct {p0, v0}, Lcom/igexin/push/extension/distribution/basic/a/a;->b(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v0

    if-eqz v0, :cond_3

    sget-object v6, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    if-eqz v6, :cond_3

    new-instance v6, Landroid/content/Intent;

    sget-object v7, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-direct {v6, v7, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v3, "action"

    const/16 v7, 0x271b

    invoke-virtual {v0, v3, v7}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    const-string v3, "com.igexin.sdk.message.GTNotificationMessage"

    invoke-static {v3}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    const-string v7, "2.12.0.0"

    invoke-static {v2, v7}, Lcom/igexin/push/extension/distribution/basic/g/c;->a(Ljava/lang/String;Ljava/lang/String;)I

    move-result v7

    const/4 v8, 0x1

    const/4 v9, 0x2

    if-nez v7, :cond_1

    new-array v7, v9, [Ljava/lang/Class;

    const-class v10, Ljava/lang/String;

    aput-object v10, v7, v5

    const-class v10, Ljava/lang/String;

    aput-object v10, v7, v8

    invoke-virtual {v3, v7}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v3

    const-string v7, "notification_arrive"

    new-array v9, v9, [Ljava/lang/Object;

    aput-object p1, v9, v5

    aput-object p2, v9, v8

    invoke-virtual {v3, v9}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/io/Serializable;

    invoke-virtual {v0, v7, v3}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    goto :goto_0

    :cond_1
    const/4 v7, 0x4

    new-array v10, v7, [Ljava/lang/Class;

    const-class v11, Ljava/lang/String;

    aput-object v11, v10, v5

    const-class v11, Ljava/lang/String;

    aput-object v11, v10, v8

    const-class v11, Ljava/lang/String;

    aput-object v11, v10, v9

    const-class v11, Ljava/lang/String;

    const/4 v12, 0x3

    aput-object v11, v10, v12

    invoke-virtual {v3, v10}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v3

    const-string v10, "notification_arrived"

    new-array v7, v7, [Ljava/lang/Object;

    aput-object p1, v7, v5

    aput-object p2, v7, v8

    aput-object p3, v7, v9

    aput-object p4, v7, v12

    invoke-virtual {v3, v7}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/io/Serializable;

    invoke-virtual {v0, v10, v3}, Landroid/os/Bundle;->putSerializable(Ljava/lang/String;Ljava/io/Serializable;)V

    :goto_0
    invoke-virtual {v6, v0}, Landroid/content/Intent;->putExtras(Landroid/os/Bundle;)Landroid/content/Intent;

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-direct {p0, v0}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_2

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/c/a;->a()Lcom/igexin/push/extension/distribution/basic/c/a;

    move-result-object v0

    sget-object v3, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0, v3, v6, v4}, Lcom/igexin/push/extension/distribution/basic/c/a;->a(Landroid/content/Context;Landroid/content/Intent;I)Z

    goto :goto_2

    :cond_2
    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0, v6}, Landroid/content/Context;->startService(Landroid/content/Intent;)Landroid/content/ComponentName;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v0

    move-object v3, v6

    goto :goto_1

    :catchall_1
    move-exception v0

    :goto_1
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v7, Lcom/igexin/push/extension/distribution/basic/a/a;->a:Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "|"

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    new-array v5, v5, [Ljava/lang/Object;

    invoke-static {v6, v5}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    instance-of v0, v0, Ljava/lang/IllegalStateException;

    if-eqz v0, :cond_3

    const-string v0, "2.13.1.0"

    invoke-static {v2, v0}, Lcom/igexin/push/extension/distribution/basic/g/c;->a(Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    if-ltz v0, :cond_3

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/c/a;->a()Lcom/igexin/push/extension/distribution/basic/c/a;

    move-result-object v0

    sget-object v2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0, v2, v3, v4}, Lcom/igexin/push/extension/distribution/basic/c/a;->a(Landroid/content/Context;Landroid/content/Intent;I)Z

    :cond_3
    :goto_2
    return-void
.end method

.method private a(Landroid/content/Context;)Z
    .locals 1

    const-string p1, "4.6.4.0"

    const-string v0, "2.13.1.0"

    invoke-static {p1, v0}, Lcom/igexin/push/extension/distribution/basic/g/c;->a(Ljava/lang/String;Ljava/lang/String;)I

    move-result p1

    if-ltz p1, :cond_0

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/g/b;->b()Z

    move-result p1

    if-eqz p1, :cond_0

    const/4 p1, 0x1

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    :goto_0
    return p1
.end method

.method private b(Ljava/lang/String;)Landroid/net/Uri;
    .locals 2

    :try_start_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "android.resource://"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "/raw/"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private b(Landroid/content/Context;)Ljava/lang/Class;
    .locals 2

    :try_start_0
    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/d/a;->a()Lcom/igexin/push/extension/distribution/basic/d/a;

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/d/a;->c()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {p1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/a/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {p1, v0}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    const/4 p1, 0x0

    return-object p1
.end method

.method private c(Ljava/lang/String;)Landroid/graphics/Bitmap;
    .locals 1

    const/4 v0, 0x0

    if-eqz p1, :cond_0

    :try_start_0
    invoke-static {p1}, Landroid/graphics/BitmapFactory;->decodeFile(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eqz p1, :cond_0

    return-object p1

    :catch_0
    :cond_0
    return-object v0
.end method


# virtual methods
.method public a(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Lcom/igexin/push/core/a;
    .locals 10

    instance-of v0, p2, Lcom/igexin/push/extension/distribution/basic/b/a;

    if-eqz v0, :cond_8

    move-object v0, p2

    check-cast v0, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-virtual {v0}, Lcom/igexin/push/extension/distribution/basic/b/a;->q()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0}, Lcom/igexin/push/extension/distribution/basic/b/a;->m()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getTaskId()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getMessageId()Ljava/lang/String;

    move-result-object p1

    const/4 v1, 0x1

    const-string v3, ""

    const/4 v4, 0x0

    if-eqz v7, :cond_1

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/c/c;->a()Lcom/igexin/push/extension/distribution/basic/c/c;

    move-result-object v5

    invoke-virtual {v5, v7}, Lcom/igexin/push/extension/distribution/basic/c/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-eqz v6, :cond_0

    invoke-virtual {v0, v4}, Lcom/igexin/push/extension/distribution/basic/b/a;->c(Z)V

    move v9, v1

    goto :goto_0

    :cond_0
    invoke-virtual {v0, v5}, Lcom/igexin/push/extension/distribution/basic/b/a;->e(Ljava/lang/String;)V

    :cond_1
    move v9, v4

    :goto_0
    if-eqz v2, :cond_3

    invoke-static {}, Lcom/igexin/push/extension/distribution/basic/c/c;->a()Lcom/igexin/push/extension/distribution/basic/c/c;

    move-result-object v5

    invoke-virtual {v5, v2}, Lcom/igexin/push/extension/distribution/basic/c/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v5, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-virtual {v0, v4}, Lcom/igexin/push/extension/distribution/basic/b/a;->d(Z)V

    goto :goto_1

    :cond_2
    invoke-virtual {v0, v5}, Lcom/igexin/push/extension/distribution/basic/b/a;->k(Ljava/lang/String;)V

    :cond_3
    move v1, v4

    :goto_1
    if-nez v1, :cond_5

    if-eqz v9, :cond_4

    goto :goto_2

    :cond_4
    sget-object p1, Lcom/igexin/push/core/a;->a:Lcom/igexin/push/core/a;

    return-object p1

    :cond_5
    :goto_2
    if-eqz v1, :cond_6

    const/4 v6, 0x2

    move-object v1, p0

    move-object v3, v8

    move-object v4, p1

    move-object v5, p2

    invoke-virtual/range {v1 .. v6}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/igexin/push/core/bean/BaseAction;I)V

    :cond_6
    if-eqz v9, :cond_7

    const/16 v0, 0x8

    move-object v3, p0

    move-object v4, v7

    move-object v5, v8

    move-object v6, p1

    move-object v7, p2

    move v8, v0

    invoke-virtual/range {v3 .. v8}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/igexin/push/core/bean/BaseAction;I)V

    :cond_7
    sget-object p1, Lcom/igexin/push/core/a;->b:Lcom/igexin/push/core/a;

    return-object p1

    :cond_8
    sget-object p1, Lcom/igexin/push/core/a;->c:Lcom/igexin/push/core/a;

    return-object p1
.end method

.method public a(Lorg/json/JSONObject;)Lcom/igexin/push/core/bean/BaseAction;
    .locals 18

    move-object/from16 v0, p1

    const-string v1, "is_noclear"

    const-string v2, ".png"

    const-string v3, "isFloat"

    const-string v4, "priority"

    const-string v5, "bigStyle"

    const-string v6, "text"

    const-string v7, "title"

    const-string v8, "id"

    const-string v9, "notifyStyle"

    const-string v10, "notifyid"

    const-string v11, "big_text"

    const-string v12, "big_image_url"

    const-string v13, "logo"

    const-string v14, "logo_url"

    :try_start_0
    new-instance v15, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-direct {v15}, Lcom/igexin/push/extension/distribution/basic/b/a;-><init>()V

    move-object/from16 v16, v10

    const-string v10, "notification"

    invoke-virtual {v15, v10}, Lcom/igexin/push/extension/distribution/basic/b/a;->setType(Ljava/lang/String;)V

    const-string v10, "actionid"

    invoke-virtual {v0, v10}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v15, v10}, Lcom/igexin/push/extension/distribution/basic/b/a;->setActionId(Ljava/lang/String;)V

    const-string v10, "do"

    invoke-virtual {v0, v10}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v15, v10}, Lcom/igexin/push/extension/distribution/basic/b/a;->setDoActionId(Ljava/lang/String;)V

    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v10
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_4

    move-object/from16 v17, v1

    const/4 v1, 0x0

    if-eqz v10, :cond_0

    :try_start_1
    invoke-virtual {v0, v9}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v9
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_0

    :catch_0
    :cond_0
    move v9, v1

    :goto_0
    :try_start_2
    invoke-virtual {v0, v8}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v10

    if-eqz v10, :cond_1

    invoke-virtual {v0, v8}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v15, v8}, Lcom/igexin/push/extension/distribution/basic/b/a;->c(Ljava/lang/String;)V

    :cond_1
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v8

    if-eqz v8, :cond_2

    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v15, v7}, Lcom/igexin/push/extension/distribution/basic/b/a;->g(Ljava/lang/String;)V

    :cond_2
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v7

    if-eqz v7, :cond_3

    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v15, v6}, Lcom/igexin/push/extension/distribution/basic/b/a;->h(Ljava/lang/String;)V

    :cond_3
    invoke-virtual {v15}, Lcom/igexin/push/extension/distribution/basic/b/a;->n()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    const/4 v7, 0x4

    if-eqz v6, :cond_4

    invoke-virtual {v15}, Lcom/igexin/push/extension/distribution/basic/b/a;->o()Ljava/lang/String;

    move-result-object v6

    invoke-static {v6}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_4

    if-eq v9, v7, :cond_4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/extension/distribution/basic/a/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "|title and content is empty, not support"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 v0, 0x0

    return-object v0

    :cond_4
    if-ne v9, v7, :cond_5

    invoke-virtual {v15, v7}, Lcom/igexin/push/extension/distribution/basic/b/a;->f(I)V

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/extension/distribution/basic/a/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "Do not support notifyStyle4"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 v0, 0x0

    return-object v0

    :cond_5
    sget-object v6, Lcom/igexin/push/extension/distribution/basic/a/a;->a:Ljava/lang/String;

    const-string v8, "parse notify style 0"

    invoke-static {v6, v8}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v15, v1}, Lcom/igexin/push/extension/distribution/basic/b/a;->f(I)V

    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_4

    const/4 v8, 0x3

    const/4 v9, 0x1

    if-eqz v6, :cond_6

    :try_start_3
    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v5
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_1

    :catch_1
    move v5, v1

    :goto_1
    if-gt v5, v8, :cond_6

    if-ge v5, v9, :cond_7

    :cond_6
    move v5, v1

    :cond_7
    :try_start_4
    invoke-virtual {v15, v5}, Lcom/igexin/push/extension/distribution/basic/b/a;->c(I)V

    invoke-virtual {v0, v14}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_4

    const-string v10, "http"

    if-eqz v6, :cond_8

    :try_start_5
    invoke-virtual {v0, v14}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v6, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v6

    if-eqz v6, :cond_8

    invoke-virtual {v0, v14}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v15, v6}, Lcom/igexin/push/extension/distribution/basic/b/a;->j(Ljava/lang/String;)V

    :cond_8
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v6
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_4

    const-string v14, ""

    if-eqz v6, :cond_d

    :try_start_6
    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v14, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    if-nez v6, :cond_d

    invoke-virtual {v0, v13}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v6, v2}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v13

    const/4 v7, -0x1

    if-ne v13, v7, :cond_a

    const-string v13, ".jpeg"

    invoke-virtual {v6, v13}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v13

    if-eq v13, v7, :cond_9

    goto :goto_3

    :cond_9
    :goto_2
    move-object v6, v14

    goto :goto_4

    :cond_a
    :goto_3
    invoke-virtual {v6, v2}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    if-ne v2, v7, :cond_b

    const-string v2, ".jpeg"

    invoke-virtual {v6, v2}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    :cond_b
    if-eq v2, v7, :cond_c

    invoke-virtual {v6, v1, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v6

    const-string v2, "^\\d+$"

    invoke-static {v2}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v2

    invoke-virtual {v2, v6}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/regex/Matcher;->matches()Z

    move-result v2

    if-eqz v2, :cond_c

    goto :goto_2

    :cond_c
    :goto_4
    invoke-virtual {v15, v6}, Lcom/igexin/push/extension/distribution/basic/b/a;->i(Ljava/lang/String;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_4

    :cond_d
    :try_start_7
    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_f

    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v2

    const/4 v4, -0x3

    if-le v2, v4, :cond_e

    if-ge v2, v8, :cond_e

    invoke-virtual {v15, v2}, Lcom/igexin/push/extension/distribution/basic/b/a;->b(I)V

    goto :goto_5

    :cond_e
    invoke-virtual {v15, v1}, Lcom/igexin/push/extension/distribution/basic/b/a;->b(I)V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_2

    goto :goto_5

    :catch_2
    :try_start_8
    invoke-virtual {v15, v1}, Lcom/igexin/push/extension/distribution/basic/b/a;->b(I)V

    :cond_f
    :goto_5
    if-ne v5, v9, :cond_10

    invoke-virtual {v0, v12}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_10

    invoke-virtual {v0, v12}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, v10}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_10

    invoke-virtual {v0, v12}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v15, v2}, Lcom/igexin/push/extension/distribution/basic/b/a;->f(Ljava/lang/String;)V

    goto :goto_6

    :cond_10
    const/4 v2, 0x2

    if-ne v5, v2, :cond_11

    invoke-virtual {v0, v11}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_11

    invoke-virtual {v0, v11}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, v14}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_11

    invoke-virtual {v0, v11}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v15, v2}, Lcom/igexin/push/extension/distribution/basic/b/a;->d(Ljava/lang/String;)V

    goto :goto_6

    :cond_11
    if-ne v5, v8, :cond_12

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/extension/distribution/basic/a/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "big style = 3 doesn\'t support"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    const/4 v0, 0x0

    return-object v0

    :cond_12
    :goto_6
    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_13

    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0xb

    if-lt v2, v4, :cond_13

    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->getBoolean(Ljava/lang/String;)Z

    move-result v2

    invoke-virtual {v15, v2}, Lcom/igexin/push/extension/distribution/basic/b/a;->b(Z)V

    :cond_13
    move-object/from16 v2, v17

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_15

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->getBoolean(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_14

    move v2, v9

    goto :goto_7

    :cond_14
    move v2, v1

    :goto_7
    invoke-virtual {v15, v2}, Lcom/igexin/push/extension/distribution/basic/b/a;->g(Z)V

    :cond_15
    const-string v2, "is_novibrate"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_17

    const-string v2, "is_novibrate"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->getBoolean(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_16

    move v2, v9

    goto :goto_8

    :cond_16
    move v2, v1

    :goto_8
    invoke-virtual {v15, v2}, Lcom/igexin/push/extension/distribution/basic/b/a;->e(Z)V

    :cond_17
    const-string v2, "is_noring"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_19

    const-string v2, "is_noring"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->getBoolean(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_18

    move v2, v9

    goto :goto_9

    :cond_18
    move v2, v1

    :goto_9
    invoke-virtual {v15, v2}, Lcom/igexin/push/extension/distribution/basic/b/a;->f(Z)V

    :cond_19
    const-string v2, "color"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1a

    const-string v2, "color"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v15, v2}, Lcom/igexin/push/extension/distribution/basic/b/a;->l(Ljava/lang/String;)V

    :cond_1a
    const-string v2, "channel"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1b

    const-string v2, "channel"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v15, v2}, Lcom/igexin/push/extension/distribution/basic/b/a;->a(Ljava/lang/String;)V

    :cond_1b
    const-string v2, "channelName"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1c

    const-string v2, "channelName"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v15, v2}, Lcom/igexin/push/extension/distribution/basic/b/a;->b(Ljava/lang/String;)V

    :cond_1c
    const-string v2, "channelLevel"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1d

    const-string v2, "channelLevel"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v15, v2}, Lcom/igexin/push/extension/distribution/basic/b/a;->a(I)V

    :cond_1d
    const-string v2, "badgeAddNum"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1e

    const-string v2, "badgeAddNum"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v15, v2}, Lcom/igexin/push/extension/distribution/basic/b/a;->h(I)V

    :cond_1e
    const-string v2, "ringName"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_1f

    const-string v2, "ringName"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v15, v2}, Lcom/igexin/push/extension/distribution/basic/b/a;->m(Ljava/lang/String;)V

    :cond_1f
    invoke-virtual {v15}, Lcom/igexin/push/extension/distribution/basic/b/a;->d()I

    move-result v2

    const/4 v3, 0x4

    if-gt v2, v3, :cond_20

    invoke-virtual {v15}, Lcom/igexin/push/extension/distribution/basic/b/a;->d()I

    move-result v2

    if-gez v2, :cond_21

    :cond_20
    invoke-virtual {v15, v8}, Lcom/igexin/push/extension/distribution/basic/b/a;->a(I)V

    :cond_21
    move-object/from16 v2, v16

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v3
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_4

    if-eqz v3, :cond_22

    :try_start_9
    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v15, v3}, Lcom/igexin/push/extension/distribution/basic/b/a;->g(I)V

    invoke-virtual {v15, v9}, Lcom/igexin/push/extension/distribution/basic/b/a;->a(Z)V
    :try_end_9
    .catch Ljava/lang/NumberFormatException; {:try_start_9 .. :try_end_9} :catch_3
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_4

    goto :goto_a

    :catch_3
    :try_start_a
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, " NotificationAction.parseAction() : "

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "_"

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/extension/distribution/basic/a/a;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_4

    :cond_22
    :goto_a
    return-object v15

    :catch_4
    const/4 v0, 0x0

    return-object v0
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/igexin/push/core/bean/BaseAction;I)V
    .locals 12

    move-object v7, p1

    move/from16 v8, p5

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "width="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v1, Lcom/igexin/push/extension/distribution/basic/c/e;->c:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "&height="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget v1, Lcom/igexin/push/extension/distribution/basic/c/e;->b:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "?"

    invoke-virtual {p1, v1}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    if-lez v2, :cond_0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "&"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    goto :goto_0

    :cond_0
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    :goto_0
    move-object v9, v0

    goto :goto_1

    :cond_1
    move-object v9, v7

    :goto_1
    new-instance v10, Lcom/igexin/push/extension/distribution/basic/f/c;

    new-instance v11, Lcom/igexin/push/extension/distribution/basic/a/b;

    move-object v0, v11

    move-object v1, p0

    move-object/from16 v2, p4

    move-object v3, p2

    move-object v4, p3

    move-object v5, p1

    move/from16 v6, p5

    invoke-direct/range {v0 .. v6}, Lcom/igexin/push/extension/distribution/basic/a/b;-><init>(Lcom/igexin/push/extension/distribution/basic/a/a;Lcom/igexin/push/core/bean/BaseAction;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    move-object v0, v10

    move-object v1, v9

    move-object v2, p1

    move-object/from16 v4, p4

    move/from16 v5, p5

    move-object v6, v11

    invoke-direct/range {v0 .. v6}, Lcom/igexin/push/extension/distribution/basic/f/c;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/igexin/push/core/bean/BaseAction;ILcom/igexin/push/extension/distribution/basic/f/e;)V

    const/4 v0, 0x2

    const/4 v1, 0x1

    if-ne v8, v0, :cond_2

    move-object/from16 v0, p4

    check-cast v0, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-virtual {v0}, Lcom/igexin/push/extension/distribution/basic/b/a;->t()I

    move-result v2

    add-int/2addr v2, v1

    invoke-virtual {v0, v2}, Lcom/igexin/push/extension/distribution/basic/b/a;->e(I)V

    goto :goto_2

    :cond_2
    const/16 v0, 0x8

    if-ne v8, v0, :cond_3

    move-object/from16 v0, p4

    check-cast v0, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-virtual {v0}, Lcom/igexin/push/extension/distribution/basic/b/a;->l()I

    move-result v2

    add-int/2addr v2, v1

    invoke-virtual {v0, v2}, Lcom/igexin/push/extension/distribution/basic/b/a;->d(I)V

    :cond_3
    :goto_2
    invoke-static {}, Lcom/igexin/b/a/b/c;->b()Lcom/igexin/b/a/b/c;

    move-result-object v0

    new-instance v2, Lcom/igexin/push/extension/distribution/basic/f/a;

    invoke-direct {v2, v10}, Lcom/igexin/push/extension/distribution/basic/f/a;-><init>(Lcom/igexin/push/extension/distribution/basic/f/d;)V

    const/4 v3, 0x0

    invoke-virtual {v0, v2, v3, v1}, Lcom/igexin/b/a/b/c;->a(Lcom/igexin/b/a/d/e;ZZ)Z

    return-void
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/igexin/push/extension/distribution/basic/b/a;I)V
    .locals 17

    move-object/from16 v7, p0

    move-object/from16 v8, p2

    move-object/from16 v9, p4

    sget-object v0, Lcom/igexin/push/core/d;->aa:Ljava/util/Map;

    invoke-static/range {p5 .. p5}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v8, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 v5, 0x0

    move-object/from16 v0, p0

    move-object/from16 v1, p2

    move-object/from16 v2, p3

    move/from16 v3, p5

    move-object/from16 v4, p4

    invoke-direct/range {v0 .. v5}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Ljava/lang/String;Ljava/lang/String;ILcom/igexin/push/extension/distribution/basic/b/a;Z)Landroid/app/PendingIntent;

    move-result-object v10

    const/4 v6, 0x0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    move-object/from16 v3, p3

    move/from16 v4, p5

    move-object/from16 v5, p4

    invoke-direct/range {v0 .. v6}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILcom/igexin/push/extension/distribution/basic/b/a;Z)Landroid/app/PendingIntent;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    const-string v2, "notification"

    invoke-virtual {v1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/app/NotificationManager;

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->r()Ljava/lang/String;

    move-result-object v2

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->n()Ljava/lang/String;

    move-result-object v3

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->o()Ljava/lang/String;

    move-result-object v4

    const/4 v5, 0x1

    if-eqz v2, :cond_1

    const-string v11, ""

    invoke-virtual {v11, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v11

    if-nez v11, :cond_1

    invoke-direct {v7, v2}, Lcom/igexin/push/extension/distribution/basic/a/a;->c(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v2

    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v12, Lcom/igexin/push/extension/distribution/basic/a/a;->a:Ljava/lang/String;

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "|use net logo bitmap is null = "

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    if-nez v2, :cond_0

    move v12, v5

    goto :goto_0

    :cond_0
    move v12, v6

    :goto_0
    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    new-array v12, v6, [Ljava/lang/Object;

    invoke-static {v11, v12}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    goto :goto_1

    :cond_1
    const/4 v2, 0x0

    :goto_1
    if-nez v2, :cond_2

    invoke-direct {v7, v9, v6}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Lcom/igexin/push/extension/distribution/basic/b/a;Z)I

    move-result v2

    sget-object v11, Lcom/igexin/push/extension/distribution/basic/c/e;->a:Landroid/content/Context;

    invoke-virtual {v11}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v11

    invoke-static {v11, v2}, Landroid/graphics/BitmapFactory;->decodeResource(Landroid/content/res/Resources;I)Landroid/graphics/Bitmap;

    move-result-object v2

    :cond_2
    new-instance v11, Landroid/app/Notification;

    invoke-direct {v11}, Landroid/app/Notification;-><init>()V

    sget v12, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v13, 0xb

    const/4 v14, 0x2

    if-lt v12, v13, :cond_c

    new-instance v11, Landroid/app/Notification$Builder;

    sget-object v12, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-direct {v11, v12}, Landroid/app/Notification$Builder;-><init>(Landroid/content/Context;)V

    sget v12, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v13, 0x1a

    if-lt v12, v13, :cond_3

    invoke-direct {v7, v9}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Lcom/igexin/push/extension/distribution/basic/b/a;)Landroid/app/Notification$Builder;

    move-result-object v11

    :cond_3
    invoke-direct {v7, v9, v5}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Lcom/igexin/push/extension/distribution/basic/b/a;Z)I

    move-result v5

    if-eqz v5, :cond_4

    sget-object v12, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v12}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v12

    invoke-virtual {v12, v5}, Landroid/content/res/Resources;->getDrawable(I)Landroid/graphics/drawable/Drawable;

    move-result-object v12

    if-nez v12, :cond_4

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/a/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "|showNotification smallIconId: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " couldn\'t find resource"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v6, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void

    :cond_4
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12

    if-nez v12, :cond_5

    invoke-virtual {v11, v3}, Landroid/app/Notification$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    :cond_5
    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v12

    if-nez v12, :cond_6

    invoke-virtual {v11, v4}, Landroid/app/Notification$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    :cond_6
    invoke-virtual {v11, v5}, Landroid/app/Notification$Builder;->setSmallIcon(I)Landroid/app/Notification$Builder;

    move-result-object v5

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->o()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v5, v12}, Landroid/app/Notification$Builder;->setTicker(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    move-result-object v5

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v12

    invoke-virtual {v5, v12, v13}, Landroid/app/Notification$Builder;->setWhen(J)Landroid/app/Notification$Builder;

    move-result-object v5

    invoke-virtual {v5, v2}, Landroid/app/Notification$Builder;->setLargeIcon(Landroid/graphics/Bitmap;)Landroid/app/Notification$Builder;

    move-result-object v2

    invoke-virtual {v2, v10}, Landroid/app/Notification$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;

    move-result-object v2

    invoke-virtual {v2, v0}, Landroid/app/Notification$Builder;->setDeleteIntent(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x18

    if-lt v0, v2, :cond_7

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->v()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_7

    :try_start_0
    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->v()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v11, v0}, Landroid/app/Notification$Builder;->setColor(I)Landroid/app/Notification$Builder;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_7
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x10

    if-lt v0, v2, :cond_9

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->i()I

    move-result v0

    sget-object v2, Lcom/igexin/push/extension/distribution/basic/a/c;->a:Lcom/igexin/push/extension/distribution/basic/a/c;

    invoke-virtual {v2}, Lcom/igexin/push/extension/distribution/basic/a/c;->a()I

    move-result v2

    if-ne v0, v2, :cond_8

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->j()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_9

    invoke-direct {v7, v0}, Lcom/igexin/push/extension/distribution/basic/a/a;->c(Ljava/lang/String;)Landroid/graphics/Bitmap;

    move-result-object v0

    if-eqz v0, :cond_9

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->e()I

    move-result v2

    invoke-virtual {v11, v2}, Landroid/app/Notification$Builder;->setPriority(I)Landroid/app/Notification$Builder;

    new-instance v2, Landroid/app/Notification$BigPictureStyle;

    invoke-direct {v2}, Landroid/app/Notification$BigPictureStyle;-><init>()V

    invoke-virtual {v2, v0}, Landroid/app/Notification$BigPictureStyle;->bigPicture(Landroid/graphics/Bitmap;)Landroid/app/Notification$BigPictureStyle;

    move-result-object v0

    goto :goto_2

    :cond_8
    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->i()I

    move-result v0

    sget-object v2, Lcom/igexin/push/extension/distribution/basic/a/c;->b:Lcom/igexin/push/extension/distribution/basic/a/c;

    invoke-virtual {v2}, Lcom/igexin/push/extension/distribution/basic/a/c;->a()I

    move-result v2

    if-ne v0, v2, :cond_9

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->h()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_9

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->e()I

    move-result v2

    invoke-virtual {v11, v2}, Landroid/app/Notification$Builder;->setPriority(I)Landroid/app/Notification$Builder;

    new-instance v2, Landroid/app/Notification$BigTextStyle;

    invoke-direct {v2}, Landroid/app/Notification$BigTextStyle;-><init>()V

    invoke-virtual {v2, v0}, Landroid/app/Notification$BigTextStyle;->bigText(Ljava/lang/CharSequence;)Landroid/app/Notification$BigTextStyle;

    move-result-object v0

    :goto_2
    invoke-virtual {v11, v0}, Landroid/app/Notification$Builder;->setStyle(Landroid/app/Notification$Style;)Landroid/app/Notification$Builder;

    :cond_9
    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->g()Z

    move-result v0

    if-eqz v0, :cond_b

    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x15

    if-lt v0, v2, :cond_b

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->x()Z

    move-result v0

    if-nez v0, :cond_a

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/extension/distribution/basic/b/a;->y()Z

    move-result v0

    if-eqz v0, :cond_b

    :cond_a
    invoke-virtual {v11, v14}, Landroid/app/Notification$Builder;->setPriority(I)Landroid/app/Notification$Builder;

    :cond_b
    invoke-virtual {v11}, Landroid/app/Notification$Builder;->getNotification()Landroid/app/Notification;

    move-result-object v11

    invoke-direct {v7, v11, v9}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Landroid/app/Notification;Lcom/igexin/push/extension/distribution/basic/b/a;)Landroid/app/Notification;

    :goto_3
    move/from16 v0, p5

    goto :goto_4

    :cond_c
    :try_start_1
    iget-object v12, v11, Landroid/app/Notification;->contentView:Landroid/widget/RemoteViews;

    if-eqz v12, :cond_d

    if-eqz v2, :cond_d

    invoke-direct/range {p0 .. p0}, Lcom/igexin/push/extension/distribution/basic/a/a;->a()I

    move-result v12

    if-lez v12, :cond_d

    iget-object v13, v11, Landroid/app/Notification;->contentView:Landroid/widget/RemoteViews;

    invoke-virtual {v13, v12, v2}, Landroid/widget/RemoteViews;->setImageViewBitmap(ILandroid/graphics/Bitmap;)V

    :cond_d
    iput-object v0, v11, Landroid/app/Notification;->deleteIntent:Landroid/app/PendingIntent;

    const-string v0, "android.app.Notification"

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v2, "setLatestEventInfo"

    const/4 v12, 0x4

    new-array v13, v12, [Ljava/lang/Class;

    const-class v15, Landroid/content/Context;

    aput-object v15, v13, v6

    const-class v15, Ljava/lang/CharSequence;

    aput-object v15, v13, v5

    const-class v15, Ljava/lang/CharSequence;

    aput-object v15, v13, v14

    const-class v15, Landroid/app/PendingIntent;

    const/16 v16, 0x3

    aput-object v15, v13, v16

    invoke-virtual {v0, v2, v13}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    invoke-virtual {v0, v5}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v2, v12, [Ljava/lang/Object;

    sget-object v12, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    aput-object v12, v2, v6

    aput-object v3, v2, v5

    aput-object v4, v2, v14

    aput-object v10, v2, v16

    invoke-virtual {v0, v11, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_3

    :goto_4
    invoke-static {v1, v0, v11, v6, v9}, Lcom/igexin/push/extension/distribution/basic/g/f;->a(Landroid/app/NotificationManager;ILandroid/app/Notification;ILcom/igexin/push/extension/distribution/basic/b/a;)V

    const-string v0, "4.6.4.0"

    const-string v1, "2.12.0.0"

    invoke-static {v0, v1}, Lcom/igexin/push/extension/distribution/basic/g/c;->a(Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    if-ltz v0, :cond_e

    move-object/from16 v0, p3

    invoke-direct {v7, v8, v0, v3, v4}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    :cond_e
    return-void

    :catch_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/extension/distribution/basic/a/a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "reflect invoke setLatestEventInfo failed!"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v6, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void
.end method

.method public b(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Z
    .locals 8

    const/4 v0, 0x1

    if-eqz p1, :cond_2

    instance-of v1, p2, Lcom/igexin/push/extension/distribution/basic/b/a;

    if-eqz v1, :cond_2

    check-cast p2, Lcom/igexin/push/extension/distribution/basic/b/a;

    invoke-virtual {p2}, Lcom/igexin/push/extension/distribution/basic/b/a;->a()Z

    move-result v1

    if-nez v1, :cond_0

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getTaskId()Ljava/lang/String;

    move-result-object v1

    invoke-direct {p0, v1}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Ljava/lang/String;)I

    move-result v1

    goto :goto_0

    :cond_0
    invoke-virtual {p2}, Lcom/igexin/push/extension/distribution/basic/b/a;->w()I

    move-result v1

    :goto_0
    move v7, v1

    const/4 v1, 0x0

    :try_start_0
    invoke-virtual {p2}, Lcom/igexin/push/extension/distribution/basic/b/a;->getActionId()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p2}, Lcom/igexin/push/extension/distribution/basic/b/a;->getActionId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->length()I

    move-result v3

    sub-int/2addr v3, v0

    invoke-virtual {v2, v3}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    add-int/lit16 v1, v1, 0x7530

    :catch_0
    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getAppKey()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getTaskId()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getMessageId()Ljava/lang/String;

    move-result-object v5

    move-object v2, p0

    move-object v6, p2

    invoke-virtual/range {v2 .. v7}, Lcom/igexin/push/extension/distribution/basic/a/a;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/igexin/push/extension/distribution/basic/b/a;I)V

    if-eqz v1, :cond_1

    invoke-static {}, Lcom/igexin/push/core/a/e;->a()Lcom/igexin/push/core/a/e;

    move-result-object v2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ""

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "notifyStyle:"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Lcom/igexin/push/extension/distribution/basic/b/a;->u()I

    move-result v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, p1, v1, v3}, Lcom/igexin/push/core/a/e;->a(Lcom/igexin/push/core/bean/PushTaskBean;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    invoke-virtual {p2}, Lcom/igexin/push/extension/distribution/basic/b/a;->getActionId()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {p1, v1}, Lcom/igexin/push/core/bean/PushTaskBean;->setPerActionid(I)V

    invoke-virtual {p2}, Lcom/igexin/push/extension/distribution/basic/b/a;->getDoActionId()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/igexin/push/core/bean/PushTaskBean;->setCurrentActionid(I)V

    :cond_2
    return v0
.end method
