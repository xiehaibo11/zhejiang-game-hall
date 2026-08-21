.class public Lcom/igexin/push/core/a/a/g;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/igexin/push/core/a/a/a;


# static fields
.field private static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    sget-object v0, Lcom/igexin/push/config/i;->a:Ljava/lang/String;

    sput-object v0, Lcom/igexin/push/core/a/a/g;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method private a(Lcom/igexin/push/core/bean/g;Z)I
    .locals 6

    const-string v0, "push_small"

    const-string v1, "mipmap"

    const-string v2, "drawable"

    if-eqz p2, :cond_2

    const/4 p2, 0x0

    :try_start_0
    sget-object v3, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v3}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v3

    sget-object v4, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-virtual {v3, v0, v2, v4}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-nez v3, :cond_0

    :try_start_1
    sget-object v4, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v4}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v4

    sget-object v5, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-virtual {v4, v0, v1, v5}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception v0

    goto :goto_0

    :catchall_1
    move-exception v0

    move v3, p2

    :goto_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v5, Lcom/igexin/push/core/a/a/g;->a:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "|"

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v4, p2, [Ljava/lang/Object;

    invoke-static {v0, v4}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_0
    :goto_1
    if-eqz v3, :cond_1

    return v3

    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v3, Lcom/igexin/push/core/a/a/g;->a:Ljava/lang/String;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "|push_small.png is missing"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array p2, p2, [Ljava/lang/Object;

    invoke-static {v0, p2}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    :cond_2
    sget-object p2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {p2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    sget-object v0, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    const-string v3, "push"

    invoke-virtual {p2, v3, v2, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    if-nez p2, :cond_3

    sget-object p2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {p2}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p2

    sget-object v0, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-virtual {p2, v3, v1, v0}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result p2

    :cond_3
    invoke-virtual {p1}, Lcom/igexin/push/core/bean/g;->g()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const v3, 0x1080093

    if-eqz v0, :cond_5

    if-eqz p2, :cond_4

    goto :goto_2

    :cond_4
    move p2, v3

    :goto_2
    return p2

    :cond_5
    invoke-virtual {p1}, Lcom/igexin/push/core/bean/g;->g()Ljava/lang/String;

    move-result-object v0

    const-string v4, "null"

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    return v3

    :cond_6
    invoke-virtual {p1}, Lcom/igexin/push/core/bean/g;->g()Ljava/lang/String;

    move-result-object v0

    const-string v4, "@"

    invoke-virtual {v0, v4}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_8

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/g;->g()Ljava/lang/String;

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
    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/g;->g()Ljava/lang/String;

    move-result-object v4

    sget-object v5, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-virtual {v0, v4, v2, v5}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    if-nez v0, :cond_9

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v0

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/g;->g()Ljava/lang/String;

    move-result-object p1

    sget-object v2, Lcom/igexin/push/core/d;->e:Ljava/lang/String;

    invoke-virtual {v0, p1, v1, v2}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v0

    :cond_9
    if-eqz v0, :cond_a

    return v0

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

.method private a(Lcom/igexin/push/core/bean/g;)Landroid/app/Notification$Builder;
    .locals 13

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

    if-eqz v5, :cond_3

    invoke-virtual {v2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v6

    const-string v10, "getNotificationChannel"

    new-array v11, v8, [Ljava/lang/Class;

    const-class v12, Ljava/lang/String;

    aput-object v12, v11, v7

    invoke-virtual {v6, v10, v11}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v10

    new-array v11, v8, [Ljava/lang/Object;

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/g;->k()Ljava/lang/String;

    move-result-object v12

    aput-object v12, v11, v7

    invoke-virtual {v10, v2, v11}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v10

    check-cast v10, Landroid/os/Parcelable;

    if-nez v10, :cond_2

    new-array v4, v4, [Ljava/lang/Object;

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/g;->k()Ljava/lang/String;

    move-result-object v10

    aput-object v10, v4, v7

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/g;->l()Ljava/lang/String;

    move-result-object v10

    aput-object v10, v4, v8

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/g;->m()I

    move-result v10

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v10

    aput-object v10, v4, v9

    invoke-virtual {v5, v4}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Landroid/os/Parcelable;

    const-string v5, "createNotificationChannel"

    new-array v10, v8, [Ljava/lang/Class;

    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    aput-object v0, v10, v7

    invoke-virtual {v6, v5, v10}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

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

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/g;->e()Z

    move-result v10

    invoke-static {v10}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v10

    aput-object v10, v6, v7

    invoke-virtual {v5, v4, v6}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/g;->f()Z

    move-result v5

    const/4 v6, 0x0

    if-eqz v5, :cond_0

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/g;->p()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_1

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/g;->p()Ljava/lang/String;

    move-result-object v5

    invoke-direct {p0, v5}, Lcom/igexin/push/core/a/a/g;->b(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v5

    new-array v9, v9, [Ljava/lang/Object;

    aput-object v5, v9, v7

    aput-object v6, v9, v8

    invoke-virtual {v3, v4, v9}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    :cond_0
    new-array v5, v9, [Ljava/lang/Object;

    aput-object v6, v5, v7

    aput-object v6, v5, v8

    invoke-virtual {v3, v4, v5}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    :goto_0
    new-array v3, v8, [Ljava/lang/Object;

    aput-object v4, v3, v7

    invoke-virtual {v0, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    invoke-virtual {v1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    const-string v2, "setChannelId"

    new-array v3, v8, [Ljava/lang/Class;

    const-class v4, Ljava/lang/String;

    aput-object v4, v3, v7

    invoke-virtual {v0, v2, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v2, v8, [Ljava/lang/Object;

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/g;->k()Ljava/lang/String;

    move-result-object p1

    aput-object p1, v2, v7

    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_3
    return-object v1
.end method

.method private a(Landroid/content/Intent;)Landroid/app/PendingIntent;
    .locals 4

    sget-object v0, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {v0}, Lcom/igexin/push/util/j;->a(Landroid/content/Context;)I

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

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILcom/igexin/push/core/bean/g;Z)Landroid/app/PendingIntent;
    .locals 2

    :try_start_0
    new-instance p4, Landroid/content/Intent;

    sget-object p6, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v0, v1}, Lcom/igexin/push/core/x;->c(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object v0

    invoke-direct {p4, p6, v0}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const-string p6, "taskid"

    invoke-virtual {p4, p6, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "messageid"

    invoke-virtual {p4, p2, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "appid"

    sget-object p3, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    invoke-virtual {p4, p2, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p2, "appkey"

    invoke-virtual {p4, p2, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "actionid"

    invoke-virtual {p5}, Lcom/igexin/push/core/bean/g;->getDoActionId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p4, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "feedbackid"

    invoke-virtual {p5}, Lcom/igexin/push/core/bean/g;->getActionId()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p5}, Lcom/igexin/push/core/bean/g;->getActionId()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {p3}, Ljava/lang/String;->length()I

    move-result p3

    add-int/lit8 p3, p3, -0x1

    invoke-virtual {p2, p3}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p4, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "action"

    const-string p2, "com.igexin.action.notification.delete"

    invoke-virtual {p4, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-direct {p0, p4}, Lcom/igexin/push/core/a/a/g;->a(Landroid/content/Intent;)Landroid/app/PendingIntent;

    move-result-object p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p1

    :catch_0
    move-exception p1

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object p3, Lcom/igexin/push/core/a/a/g;->a:Ljava/lang/String;

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

.method private a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)Landroid/app/PendingIntent;
    .locals 2

    new-instance v0, Landroid/content/Intent;

    sget-object v1, Lcom/igexin/push/core/CoreConsts;->b:Ljava/lang/String;

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const-string v1, "taskid"

    invoke-virtual {v0, v1, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "messageid"

    invoke-virtual {v0, p1, p2}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, ""

    if-nez p5, :cond_0

    move-object p5, p1

    :cond_0
    const-string p2, "title"

    invoke-virtual {v0, p2, p5}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    if-nez p6, :cond_1

    move-object p6, p1

    :cond_1
    const-string p1, "content"

    invoke-virtual {v0, p1, p6}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    sget-object p1, Lcom/igexin/push/core/d;->a:Ljava/lang/String;

    const-string p2, "appid"

    invoke-virtual {v0, p2, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "actionid"

    invoke-virtual {v0, p1, p3}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    sget-object p1, Lcom/igexin/push/core/d;->ad:Ljava/lang/String;

    const-string p2, "accesstoken"

    invoke-virtual {v0, p2, p1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const-string p1, "notifID"

    invoke-virtual {v0, p1, p4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;I)Landroid/content/Intent;

    sget-object p1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {p1}, Lcom/igexin/push/util/j;->a(Landroid/content/Context;)I

    move-result p1

    const/16 p2, 0x1f

    const-string p3, "broadcast_intent"

    const-string p4, "com.igexin.action.notification.click"

    const-string p5, "action"

    if-lt p1, p2, :cond_2

    sget p1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 p2, 0x1e

    if-lt p1, p2, :cond_2

    new-instance p1, Landroid/content/Intent;

    sget-object p2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    const-class p6, Lcom/igexin/sdk/GetuiActivity;

    invoke-direct {p1, p2, p6}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 p2, 0x10000000

    invoke-virtual {p1, p2}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    invoke-virtual {p1, p5, p4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-virtual {p1, p3, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    sget-object p2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    new-instance p3, Ljava/util/Random;

    invoke-direct {p3}, Ljava/util/Random;-><init>()V

    const/16 p4, 0x3e8

    invoke-virtual {p3, p4}, Ljava/util/Random;->nextInt(I)I

    move-result p3

    const/high16 p4, 0x4000000

    invoke-static {p2, p3, p1, p4}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object p1

    return-object p1

    :cond_2
    new-instance p1, Landroid/content/Intent;

    sget-object p2, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-static {}, Lcom/igexin/push/core/x;->a()Lcom/igexin/push/core/x;

    move-result-object p6

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {p6, v1}, Lcom/igexin/push/core/x;->c(Landroid/content/Context;)Ljava/lang/Class;

    move-result-object p6

    invoke-direct {p1, p2, p6}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    invoke-virtual {p1, p5, p4}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    invoke-virtual {p1, p3, v0}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Landroid/os/Parcelable;)Landroid/content/Intent;

    invoke-direct {p0, p1}, Lcom/igexin/push/core/a/a/g;->a(Landroid/content/Intent;)Landroid/app/PendingIntent;

    move-result-object p1

    return-object p1
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


# virtual methods
.method public a(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Lcom/igexin/push/core/a;
    .locals 0

    sget-object p1, Lcom/igexin/push/core/a;->a:Lcom/igexin/push/core/a;

    return-object p1
.end method

.method public a(Lorg/json/JSONObject;)Lcom/igexin/push/core/bean/BaseAction;
    .locals 21

    move-object/from16 v0, p1

    const-string v1, "channelLevel"

    const-string v2, "channelName"

    const-string v3, "channel"

    const-string v4, "banner_url"

    const-string v5, "logo_url"

    const-string v6, "is_chklayout"

    const-string v7, "ringName"

    const-string v8, "badgeAddNum"

    const-string v9, ".png"

    const-string v10, "is_noring"

    const-string v11, "is_novibrate"

    const-string v12, "is_noclear"

    const-string v13, "notifyid"

    const-string v14, ""

    const-string v15, "logo"

    const/16 v16, 0x0

    move-object/from16 v17, v13

    :try_start_0
    new-instance v13, Lcom/igexin/push/core/bean/g;

    invoke-direct {v13}, Lcom/igexin/push/core/bean/g;-><init>()V

    move-object/from16 v18, v1

    const-string v1, "notification"

    invoke-virtual {v13, v1}, Lcom/igexin/push/core/bean/g;->setType(Ljava/lang/String;)V

    const-string v1, "actionid"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v13, v1}, Lcom/igexin/push/core/bean/g;->setActionId(Ljava/lang/String;)V

    const-string v1, "do"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v13, v1}, Lcom/igexin/push/core/bean/g;->setDoActionId(Ljava/lang/String;)V

    const-string v1, "title"

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    move-object/from16 v19, v2

    const-string v2, "text"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v13, v1}, Lcom/igexin/push/core/bean/g;->a(Ljava/lang/String;)V

    invoke-virtual {v13, v2}, Lcom/igexin/push/core/bean/g;->b(Ljava/lang/String;)V

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    move-object/from16 v20, v3

    const/4 v3, 0x0

    if-eqz v1, :cond_0

    invoke-static {v2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/core/a/a/g;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " title & content = null"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v3, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-object v16

    :cond_0
    invoke-virtual {v0, v15}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_5

    invoke-virtual {v0, v15}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v14, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_5

    invoke-virtual {v0, v15}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1, v9}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v2
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1

    const-string v15, ".jpeg"

    const/4 v3, -0x1

    if-ne v2, v3, :cond_1

    :try_start_1
    invoke-virtual {v1, v15}, Ljava/lang/String;->lastIndexOf(Ljava/lang/String;)I

    move-result v2

    if-eq v2, v3, :cond_4

    :cond_1
    invoke-virtual {v1, v9}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    if-ne v2, v3, :cond_2

    invoke-virtual {v1, v15}, Ljava/lang/String;->indexOf(Ljava/lang/String;)I

    move-result v2

    :cond_2
    if-eq v2, v3, :cond_3

    const/4 v3, 0x0

    invoke-virtual {v1, v3, v2}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v1

    const-string v2, "^\\d+$"

    invoke-static {v2}, Ljava/util/regex/Pattern;->compile(Ljava/lang/String;)Ljava/util/regex/Pattern;

    move-result-object v2

    invoke-virtual {v2, v1}, Ljava/util/regex/Pattern;->matcher(Ljava/lang/CharSequence;)Ljava/util/regex/Matcher;

    move-result-object v2

    invoke-virtual {v2}, Ljava/util/regex/Matcher;->matches()Z

    move-result v2

    if-eqz v2, :cond_3

    goto :goto_0

    :cond_3
    move-object v14, v1

    :cond_4
    :goto_0
    invoke-virtual {v13, v14}, Lcom/igexin/push/core/bean/g;->c(Ljava/lang/String;)V

    :cond_5
    invoke-virtual {v0, v12}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    const/4 v3, 0x1

    if-eqz v1, :cond_7

    invoke-virtual {v0, v12}, Lorg/json/JSONObject;->getBoolean(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_6

    move v1, v3

    goto :goto_1

    :cond_6
    const/4 v1, 0x0

    :goto_1
    invoke-virtual {v13, v1}, Lcom/igexin/push/core/bean/g;->b(Z)V

    :cond_7
    invoke-virtual {v0, v11}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_9

    invoke-virtual {v0, v11}, Lorg/json/JSONObject;->getBoolean(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_8

    move v1, v3

    goto :goto_2

    :cond_8
    const/4 v1, 0x0

    :goto_2
    invoke-virtual {v13, v1}, Lcom/igexin/push/core/bean/g;->c(Z)V

    :cond_9
    invoke-virtual {v0, v10}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_b

    invoke-virtual {v0, v10}, Lorg/json/JSONObject;->getBoolean(Ljava/lang/String;)Z

    move-result v1

    if-nez v1, :cond_a

    move v1, v3

    goto :goto_3

    :cond_a
    const/4 v1, 0x0

    :goto_3
    invoke-virtual {v13, v1}, Lcom/igexin/push/core/bean/g;->d(Z)V

    :cond_b
    invoke-virtual {v0, v8}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_c

    invoke-virtual {v0, v8}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v13, v1}, Lcom/igexin/push/core/bean/g;->c(I)V

    :cond_c
    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_d

    invoke-virtual {v0, v7}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v13, v1}, Lcom/igexin/push/core/bean/g;->h(Ljava/lang/String;)V

    :cond_d
    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_e

    invoke-virtual {v0, v6}, Lorg/json/JSONObject;->getBoolean(Ljava/lang/String;)Z

    move-result v1

    invoke-virtual {v13, v1}, Lcom/igexin/push/core/bean/g;->e(Z)V

    :cond_e
    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_f

    invoke-virtual {v0, v5}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v13, v1}, Lcom/igexin/push/core/bean/g;->d(Ljava/lang/String;)V

    :cond_f
    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_10

    invoke-virtual {v0, v4}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v13, v1}, Lcom/igexin/push/core/bean/g;->e(Ljava/lang/String;)V

    :cond_10
    move-object/from16 v1, v20

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_11

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v13, v1}, Lcom/igexin/push/core/bean/g;->f(Ljava/lang/String;)V

    :cond_11
    move-object/from16 v1, v19

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_12

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v13, v1}, Lcom/igexin/push/core/bean/g;->g(Ljava/lang/String;)V

    :cond_12
    move-object/from16 v1, v18

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_13

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->getInt(Ljava/lang/String;)I

    move-result v1

    invoke-virtual {v13, v1}, Lcom/igexin/push/core/bean/g;->a(I)V

    :cond_13
    move-object/from16 v1, v17

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v2
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_1

    if-eqz v2, :cond_14

    :try_start_2
    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v13, v2}, Lcom/igexin/push/core/bean/g;->b(I)V

    invoke-virtual {v13, v3}, Lcom/igexin/push/core/bean/g;->a(Z)V
    :try_end_2
    .catch Ljava/lang/NumberFormatException; {:try_start_2 .. :try_end_2} :catch_0
    .catch Lorg/json/JSONException; {:try_start_2 .. :try_end_2} :catch_1

    goto :goto_4

    :catch_0
    :try_start_3
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, " NotificationAction.parseAction() : "

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, "_"

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/igexin/push/core/a/a/g;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V
    :try_end_3
    .catch Lorg/json/JSONException; {:try_start_3 .. :try_end_3} :catch_1

    :cond_14
    :goto_4
    return-object v13

    :catch_1
    return-object v16
.end method

.method public a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/igexin/push/core/bean/g;)V
    .locals 16

    move-object/from16 v7, p0

    move-object/from16 v8, p2

    move-object/from16 v9, p4

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->a()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-direct {v7, v8}, Lcom/igexin/push/core/a/a/g;->a(Ljava/lang/String;)I

    move-result v0

    goto :goto_0

    :cond_0
    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->n()I

    move-result v0

    :goto_0
    move v10, v0

    sget-object v0, Lcom/igexin/push/core/d;->aa:Ljava/util/Map;

    invoke-static {v10}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-interface {v0, v8, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->getDoActionId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->b()Ljava/lang/String;

    move-result-object v5

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->c()Ljava/lang/String;

    move-result-object v6

    move-object/from16 v0, p0

    move-object/from16 v1, p2

    move-object/from16 v2, p3

    move v4, v10

    invoke-direct/range {v0 .. v6}, Lcom/igexin/push/core/a/a/g;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)Landroid/app/PendingIntent;

    move-result-object v11

    const/4 v6, 0x0

    move-object/from16 v1, p1

    move-object/from16 v2, p2

    move-object/from16 v3, p3

    move-object/from16 v5, p4

    invoke-direct/range {v0 .. v6}, Lcom/igexin/push/core/a/a/g;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILcom/igexin/push/core/bean/g;Z)Landroid/app/PendingIntent;

    move-result-object v0

    sget-object v1, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    const-string v2, "notification"

    invoke-virtual {v1, v2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/app/NotificationManager;

    const/4 v2, 0x0

    invoke-direct {v7, v9, v2}, Lcom/igexin/push/core/a/a/g;->a(Lcom/igexin/push/core/bean/g;Z)I

    move-result v3

    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0xb

    const/4 v6, 0x2

    const/4 v12, 0x4

    const/4 v13, 0x1

    if-ge v4, v5, :cond_1

    new-instance v0, Landroid/app/Notification;

    invoke-direct {v0}, Landroid/app/Notification;-><init>()V

    iput v3, v0, Landroid/app/Notification;->icon:I

    :try_start_0
    const-string v3, "android.app.Notification"

    invoke-static {v3}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    const-string v4, "setLatestEventInfo"

    new-array v5, v12, [Ljava/lang/Class;

    const-class v14, Landroid/content/Context;

    aput-object v14, v5, v2

    const-class v14, Ljava/lang/CharSequence;

    aput-object v14, v5, v13

    const-class v14, Ljava/lang/CharSequence;

    aput-object v14, v5, v6

    const-class v14, Landroid/app/PendingIntent;

    const/4 v15, 0x3

    aput-object v14, v5, v15

    invoke-virtual {v3, v4, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    invoke-virtual {v3, v13}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v4, v12, [Ljava/lang/Object;

    sget-object v5, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    aput-object v5, v4, v2

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->b()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v4, v13

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->c()Ljava/lang/String;

    move-result-object v5

    aput-object v5, v4, v6

    aput-object v11, v4, v15

    invoke-virtual {v3, v0, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto/16 :goto_2

    :catch_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v1, Lcom/igexin/push/core/a/a/g;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "reflect invoke setLatestEventInfo failed!"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    new-array v1, v2, [Ljava/lang/Object;

    invoke-static {v0, v1}, Lcom/igexin/b/a/c/b;->a(Ljava/lang/String;[Ljava/lang/Object;)V

    return-void

    :cond_1
    sget v4, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v5, 0x1a

    if-lt v4, v5, :cond_2

    invoke-direct {v7, v9}, Lcom/igexin/push/core/a/a/g;->a(Lcom/igexin/push/core/bean/g;)Landroid/app/Notification$Builder;

    move-result-object v4

    goto :goto_1

    :cond_2
    new-instance v4, Landroid/app/Notification$Builder;

    sget-object v5, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-direct {v4, v5}, Landroid/app/Notification$Builder;-><init>(Landroid/content/Context;)V

    :goto_1
    invoke-direct {v7, v9, v13}, Lcom/igexin/push/core/a/a/g;->a(Lcom/igexin/push/core/bean/g;Z)I

    move-result v5

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->b()Ljava/lang/String;

    move-result-object v14

    invoke-static {v14}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v14

    if-nez v14, :cond_3

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->b()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v4, v14}, Landroid/app/Notification$Builder;->setContentTitle(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    :cond_3
    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->c()Ljava/lang/String;

    move-result-object v14

    invoke-static {v14}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v14

    if-nez v14, :cond_4

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->c()Ljava/lang/String;

    move-result-object v14

    invoke-virtual {v4, v14}, Landroid/app/Notification$Builder;->setContentText(Ljava/lang/CharSequence;)Landroid/app/Notification$Builder;

    :cond_4
    invoke-virtual {v4, v5}, Landroid/app/Notification$Builder;->setSmallIcon(I)Landroid/app/Notification$Builder;

    move-result-object v4

    sget-object v5, Lcom/igexin/push/core/d;->g:Landroid/content/Context;

    invoke-virtual {v5}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object v5

    invoke-static {v5, v3}, Landroid/graphics/BitmapFactory;->decodeResource(Landroid/content/res/Resources;I)Landroid/graphics/Bitmap;

    move-result-object v3

    invoke-virtual {v4, v3}, Landroid/app/Notification$Builder;->setLargeIcon(Landroid/graphics/Bitmap;)Landroid/app/Notification$Builder;

    move-result-object v3

    invoke-virtual {v3, v11}, Landroid/app/Notification$Builder;->setContentIntent(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;

    move-result-object v3

    invoke-virtual {v3, v0}, Landroid/app/Notification$Builder;->setDeleteIntent(Landroid/app/PendingIntent;)Landroid/app/Notification$Builder;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Notification$Builder;->getNotification()Landroid/app/Notification;

    move-result-object v0

    invoke-static {}, Lcom/igexin/push/util/a;->e()Z

    move-result v3

    if-eqz v3, :cond_5

    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x15

    if-lt v3, v4, :cond_5

    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v4, 0x18

    if-ge v3, v4, :cond_5

    :try_start_1
    const-string v3, "com.android.internal.R$id"

    invoke-static {v3}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v3

    const-string v4, "right_icon"

    invoke-virtual {v3, v4}, Ljava/lang/Class;->getField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v3

    invoke-virtual {v3, v13}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    const/4 v4, 0x0

    invoke-virtual {v3, v4}, Ljava/lang/reflect/Field;->getInt(Ljava/lang/Object;)I

    move-result v3

    iget-object v4, v0, Landroid/app/Notification;->contentView:Landroid/widget/RemoteViews;

    if-eqz v4, :cond_5

    if-eqz v3, :cond_5

    iget-object v4, v0, Landroid/app/Notification;->contentView:Landroid/widget/RemoteViews;

    const/16 v5, 0x8

    invoke-virtual {v4, v3, v5}, Landroid/widget/RemoteViews;->setViewVisibility(II)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    :catch_1
    :cond_5
    :goto_2
    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->c()Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Landroid/app/Notification;->tickerText:Ljava/lang/CharSequence;

    iput v12, v0, Landroid/app/Notification;->defaults:I

    const v3, -0xff0100

    iput v3, v0, Landroid/app/Notification;->ledARGB:I

    const/16 v3, 0x3e8

    iput v3, v0, Landroid/app/Notification;->ledOnMS:I

    const/16 v3, 0xbb8

    iput v3, v0, Landroid/app/Notification;->ledOffMS:I

    iput v13, v0, Landroid/app/Notification;->flags:I

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->d()Z

    move-result v3

    if-eqz v3, :cond_6

    iget v3, v0, Landroid/app/Notification;->flags:I

    or-int/lit8 v3, v3, 0x10

    goto :goto_3

    :cond_6
    iget v3, v0, Landroid/app/Notification;->flags:I

    or-int/lit8 v3, v3, 0x20

    :goto_3
    iput v3, v0, Landroid/app/Notification;->flags:I

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->f()Z

    move-result v3

    if-eqz v3, :cond_8

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->p()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-eqz v3, :cond_7

    iget v3, v0, Landroid/app/Notification;->defaults:I

    or-int/2addr v3, v13

    iput v3, v0, Landroid/app/Notification;->defaults:I

    goto :goto_4

    :cond_7
    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->p()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v7, v3}, Lcom/igexin/push/core/a/a/g;->b(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object v3

    iput-object v3, v0, Landroid/app/Notification;->sound:Landroid/net/Uri;

    :cond_8
    :goto_4
    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->e()Z

    move-result v3

    if-eqz v3, :cond_9

    iget v3, v0, Landroid/app/Notification;->defaults:I

    or-int/2addr v3, v6

    iput v3, v0, Landroid/app/Notification;->defaults:I

    :cond_9
    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->i()Ljava/lang/String;

    move-result-object v3

    if-nez v3, :cond_a

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->h()Ljava/lang/String;

    move-result-object v3

    if-eqz v3, :cond_b

    :cond_a
    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->j()Z

    move-result v3

    if-eqz v3, :cond_b

    return-void

    :cond_b
    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->o()I

    move-result v3

    if-lez v3, :cond_c

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->o()I

    move-result v3

    invoke-static {v3, v2}, Lcom/igexin/push/util/b;->a(IZ)Z

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->o()I

    move-result v2

    invoke-static {v2, v0}, Lcom/igexin/push/util/b;->a(ILandroid/app/Notification;)Z

    :cond_c
    invoke-virtual {v1, v10, v0}, Landroid/app/NotificationManager;->notify(ILandroid/app/Notification;)V

    invoke-static {}, Lcom/igexin/push/core/r;->a()Lcom/igexin/push/core/r;

    move-result-object v0

    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->b()Ljava/lang/String;

    move-result-object v1

    const-string v2, ""

    if-nez v1, :cond_d

    move-object v1, v2

    goto :goto_5

    :cond_d
    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->b()Ljava/lang/String;

    move-result-object v1

    :goto_5
    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->c()Ljava/lang/String;

    move-result-object v3

    if-nez v3, :cond_e

    goto :goto_6

    :cond_e
    invoke-virtual/range {p4 .. p4}, Lcom/igexin/push/core/bean/g;->c()Ljava/lang/String;

    move-result-object v2

    :goto_6
    move-object/from16 v3, p3

    invoke-virtual {v0, v8, v3, v1, v2}, Lcom/igexin/push/core/r;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public b(Lcom/igexin/push/core/bean/PushTaskBean;Lcom/igexin/push/core/bean/BaseAction;)Z
    .locals 2

    if-eqz p1, :cond_0

    instance-of v0, p2, Lcom/igexin/push/core/bean/g;

    if-eqz v0, :cond_0

    check-cast p2, Lcom/igexin/push/core/bean/g;

    :try_start_0
    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getAppKey()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getTaskId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/igexin/push/core/bean/PushTaskBean;->getMessageId()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, v0, v1, p1, p2}, Lcom/igexin/push/core/a/a/g;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lcom/igexin/push/core/bean/g;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    const/4 p1, 0x1

    return p1
.end method
