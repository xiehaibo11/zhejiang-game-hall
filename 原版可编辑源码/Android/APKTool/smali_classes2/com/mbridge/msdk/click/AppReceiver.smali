.class public Lcom/mbridge/msdk/click/AppReceiver;
.super Landroid/content/BroadcastReceiver;
.source "AppReceiver.java"


# static fields
.field private static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 28
    const-class v0, Lcom/mbridge/msdk/click/AppReceiver;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/click/AppReceiver;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 27
    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 17

    move-object/from16 v1, p1

    .line 35
    invoke-virtual/range {p2 .. p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    const-string v2, "android.intent.action.PACKAGE_ADDED"

    invoke-static {v0, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 36
    invoke-virtual/range {p2 .. p2}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 38
    :try_start_0
    invoke-virtual/range {p2 .. p2}, Landroid/content/Intent;->getData()Landroid/net/Uri;

    move-result-object v0

    invoke-virtual {v0}, Landroid/net/Uri;->getSchemeSpecificPart()Ljava/lang/String;

    move-result-object v10

    .line 41
    invoke-static/range {p1 .. p1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    .line 40
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/g;->b(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/g;

    move-result-object v0

    .line 41
    invoke-virtual {v0, v10}, Lcom/mbridge/msdk/foundation/db/g;->h(Ljava/lang/String;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v11

    .line 1020
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    .line 1021
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/e;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/e;

    move-result-object v0

    .line 1022
    invoke-virtual {v0, v10}, Lcom/mbridge/msdk/foundation/db/e;->j(Ljava/lang/String;)I

    move-result v2

    .line 1023
    invoke-virtual {v0, v10}, Lcom/mbridge/msdk/foundation/db/e;->l(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    .line 1024
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/foundation/db/e;->d(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 1025
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/foundation/db/e;->e(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v7

    .line 1026
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/foundation/db/e;->g(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    .line 1027
    invoke-virtual {v0, v5}, Lcom/mbridge/msdk/foundation/db/e;->f(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    .line 1028
    invoke-virtual {v0, v10}, Lcom/mbridge/msdk/foundation/db/e;->k(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_4

    const/4 v13, 0x1

    const/4 v14, 0x0

    :try_start_1
    const-string v0, "com.mbridge.msdk.mbdownload.manager.ADownloadManager"

    .line 1030
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v3, "getInstance"

    new-array v4, v14, [Ljava/lang/Class;

    .line 1031
    invoke-virtual {v0, v3, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v3

    const/4 v4, 0x0

    new-array v15, v14, [Ljava/lang/Object;

    .line 1032
    invoke-virtual {v3, v4, v15}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    const-string v4, "installed"

    new-array v15, v13, [Ljava/lang/Class;

    .line 1034
    const-class v16, Ljava/lang/String;

    aput-object v16, v15, v14

    invoke-virtual {v0, v4, v15}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v0

    new-array v4, v13, [Ljava/lang/Object;

    aput-object v5, v4, v14

    .line 1035
    invoke-virtual {v0, v3, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_1
    .catch Ljava/lang/ClassNotFoundException; {:try_start_1 .. :try_end_1} :catch_3
    .catch Ljava/lang/NoSuchMethodException; {:try_start_1 .. :try_end_1} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_1 .. :try_end_1} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_1 .. :try_end_1} :catch_0
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_4

    goto :goto_0

    :catch_0
    move-exception v0

    .line 1043
    :try_start_2
    invoke-virtual {v0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 1041
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception v0

    .line 1039
    invoke-virtual {v0}, Ljava/lang/NoSuchMethodException;->printStackTrace()V

    goto :goto_0

    :catch_3
    move-exception v0

    .line 1037
    invoke-virtual {v0}, Ljava/lang/ClassNotFoundException;->printStackTrace()V

    :goto_0
    if-eqz v2, :cond_1

    if-eq v2, v13, :cond_0

    goto :goto_1

    .line 1050
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->c()Landroid/content/Context;

    move-result-object v0

    .line 1051
    instance-of v2, v0, Landroid/app/Activity;

    if-eqz v2, :cond_2

    .line 1052
    new-instance v15, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    new-instance v4, Lcom/mbridge/msdk/click/a$1;

    move-object v2, v4

    move-object v3, v10

    move-object v13, v4

    move-object v4, v0

    invoke-direct/range {v2 .. v9}, Lcom/mbridge/msdk/click/a$1;-><init>(Ljava/lang/String;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-direct {v15, v0, v13}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;-><init>(Landroid/content/Context;Lcom/mbridge/msdk/widget/dialog/a;)V

    .line 1068
    invoke-virtual {v15, v12}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->makeInstallAlert(Ljava/lang/String;)V

    .line 1069
    invoke-virtual {v15}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->show()V

    goto :goto_1

    .line 1047
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v10}, Lcom/mbridge/msdk/click/c;->f(Landroid/content/Context;Ljava/lang/String;)V

    :cond_2
    :goto_1
    if-eqz v11, :cond_3

    const-string v0, "install"

    .line 44
    invoke-static {v11, v1, v0}, Lcom/mbridge/msdk/click/b;->b(Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;)V

    :cond_3
    const/4 v0, 0x7

    new-array v0, v0, [Ljava/lang/String;

    aput-object v10, v0, v14

    .line 47
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "downloadType"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    const/4 v3, 0x1

    aput-object v2, v0, v3

    const/4 v2, 0x2

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "linkType"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v0, v2

    const/4 v2, 0x3

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "rid"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v0, v2

    const/4 v2, 0x4

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "cid"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v0, v2

    const/4 v2, 0x5

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "isDowning"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v0, v2

    const/4 v2, 0x6

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "process"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    aput-object v3, v0, v2

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/ag;->a(Landroid/content/Context;[Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_4

    goto :goto_2

    :catch_4
    move-exception v0

    .line 49
    sget-object v1, Lcom/mbridge/msdk/click/AppReceiver;->a:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_2
    return-void
.end method
