.class final Lcom/mbridge/msdk/mbdownload/c$a;
.super Landroid/os/Handler;
.source "DownloadProvider.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbdownload/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "a"
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbdownload/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbdownload/c;)V
    .locals 0

    .line 588
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public final handleMessage(Landroid/os/Message;)V
    .locals 18

    move-object/from16 v1, p0

    move-object/from16 v0, p1

    const-string v2, "application/vnd.android.package-archive"

    .line 593
    iget v3, v0, Landroid/os/Message;->what:I

    const/4 v4, 0x5

    const/high16 v5, 0x8000000

    const-string v6, "filename"

    const/4 v7, 0x3

    const/4 v8, 0x2

    const/4 v9, 0x0

    const/4 v10, 0x1

    if-eq v3, v4, :cond_2

    const/4 v2, 0x6

    if-eq v3, v2, :cond_0

    goto/16 :goto_6

    .line 678
    :cond_0
    iget-object v2, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    move-object v15, v2

    check-cast v15, Lcom/mbridge/msdk/mbdownload/b$a;

    .line 679
    iget v14, v0, Landroid/os/Message;->arg2:I

    .line 680
    invoke-virtual/range {p1 .. p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object v0

    invoke-virtual {v0, v6}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    .line 682
    iget-object v0, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/c;->c(Lcom/mbridge/msdk/mbdownload/c;)Landroid/support/v4/app/NotificationManagerCompat;

    move-result-object v0

    invoke-virtual {v0, v14}, Landroid/support/v4/app/NotificationManagerCompat;->cancel(I)V

    .line 684
    iget-object v0, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    .line 685
    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v0

    new-instance v3, Landroid/content/Intent;

    invoke-direct {v3}, Landroid/content/Intent;-><init>()V

    .line 684
    invoke-static {v0, v9, v3, v5}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v0

    .line 687
    iget-object v3, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v3}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v3

    iget-object v4, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v4}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v4

    invoke-virtual {v4}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v4

    invoke-static {v4}, Lcom/mbridge/msdk/mbdownload/g;->k(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v4

    invoke-static {v3, v4, v0}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;Ljava/lang/String;Landroid/app/PendingIntent;)Landroid/app/Notification;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 690
    :try_start_0
    iget-object v3, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v3}, Lcom/mbridge/msdk/mbdownload/c;->c(Lcom/mbridge/msdk/mbdownload/c;)Landroid/support/v4/app/NotificationManagerCompat;

    move-result-object v3

    add-int/lit8 v4, v14, 0x1

    invoke-virtual {v3, v4, v0}, Landroid/support/v4/app/NotificationManagerCompat;->notify(ILandroid/app/Notification;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 692
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    const-string v0, ".patch"

    const-string v3, ".apk"

    .line 695
    invoke-virtual {v2, v0, v3}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0

    .line 696
    iget-object v3, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v3}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v3

    invoke-static {v3}, Lcom/mbridge/msdk/mbdownload/a;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    .line 697
    new-instance v4, Lcom/mbridge/msdk/mbdownload/e$c;

    iget-object v5, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v5}, Lcom/mbridge/msdk/mbdownload/c;->a(Lcom/mbridge/msdk/mbdownload/c;)Lcom/mbridge/msdk/mbdownload/e;

    move-result-object v12

    invoke-virtual {v12}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    iget-object v5, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v5}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v13

    move-object v11, v4

    move-object/from16 v16, v0

    invoke-direct/range {v11 .. v16}, Lcom/mbridge/msdk/mbdownload/e$c;-><init>(Lcom/mbridge/msdk/mbdownload/e;Landroid/content/Context;ILcom/mbridge/msdk/mbdownload/b$a;Ljava/lang/String;)V

    new-array v5, v7, [Ljava/lang/String;

    aput-object v3, v5, v9

    aput-object v0, v5, v10

    aput-object v2, v5, v8

    .line 698
    invoke-virtual {v4, v5}, Lcom/mbridge/msdk/mbdownload/e$c;->execute([Ljava/lang/Object;)Landroid/os/AsyncTask;

    goto/16 :goto_6

    .line 595
    :cond_2
    iget-object v3, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v3, Lcom/mbridge/msdk/mbdownload/b$a;

    .line 596
    iget v4, v0, Landroid/os/Message;->arg2:I

    .line 598
    :try_start_1
    invoke-virtual/range {p1 .. p1}, Landroid/os/Message;->getData()Landroid/os/Bundle;

    move-result-object v0

    invoke-virtual {v0, v6}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    .line 599
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->a:Ljava/lang/String;

    const-string v11, "Cancel old notification...."

    invoke-static {v0, v11}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 600
    new-instance v11, Landroid/content/Intent;

    const-string v0, "android.intent.action.VIEW"

    invoke-direct {v11, v0}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const/high16 v0, 0x10000000

    .line 601
    invoke-virtual {v11, v0}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_4
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 603
    :try_start_2
    iget-object v0, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v0

    invoke-virtual {v0}, Landroid/app/Service;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    .line 604
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/tools/v;->w(Landroid/content/Context;)I

    move-result v12

    const/16 v13, 0x18

    if-lt v12, v13, :cond_4

    .line 605
    sget v12, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-lt v12, v13, :cond_4

    const/4 v12, 0x0

    .line 609
    :try_start_3
    sget-object v13, Lcom/mbridge/msdk/MBridgeConstans;->FILE_PROVIDE_CUSTOM_PATH:Ljava/lang/String;

    invoke-static {v13}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v13
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    const-string v14, ".mbFileProvider"

    if-nez v13, :cond_3

    .line 610
    :try_start_4
    sget-object v13, Lcom/mbridge/msdk/MBridgeConstans;->FILE_PROVIDE_CUSTOM_PATH:Ljava/lang/String;

    invoke-static {v13}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v13

    const-string v15, "getUriForFile"

    new-array v5, v7, [Ljava/lang/Class;

    .line 611
    const-class v17, Landroid/content/Context;

    aput-object v17, v5, v9

    const-class v17, Ljava/lang/String;

    aput-object v17, v5, v10

    const-class v17, Ljava/io/File;

    aput-object v17, v5, v8

    invoke-virtual {v13, v15, v5}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v5

    new-array v7, v7, [Ljava/lang/Object;

    aput-object v0, v7, v9

    .line 612
    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v13, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    aput-object v0, v7, v10

    new-instance v0, Ljava/io/File;

    invoke-direct {v0, v6}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    aput-object v0, v7, v8

    invoke-virtual {v5, v12, v7}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/net/Uri;

    check-cast v0, Landroid/net/Uri;

    goto :goto_1

    .line 614
    :cond_3
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v7

    invoke-virtual {v7}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    new-instance v7, Ljava/io/File;

    invoke-direct {v7, v6}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0, v5, v7}, Lcom/mbridge/msdk/foundation/tools/MBFileProvider;->getUriForFile(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)Landroid/net/Uri;

    move-result-object v0
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    :goto_1
    move-object v12, v0

    goto :goto_2

    :catch_1
    move-exception v0

    .line 619
    :try_start_5
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_2
    if-eqz v12, :cond_5

    .line 622
    invoke-virtual {v11, v12, v2}, Landroid/content/Intent;->setDataAndType(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;

    .line 623
    invoke-virtual {v11, v10}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    goto :goto_3

    .line 626
    :cond_4
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, v6}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v0

    invoke-virtual {v11, v0, v2}, Landroid/content/Intent;->setDataAndType(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    goto :goto_3

    .line 629
    :catch_2
    :try_start_6
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, v6}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v0}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v0

    invoke-virtual {v11, v0, v2}, Landroid/content/Intent;->setDataAndType(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;

    .line 631
    :cond_5
    :goto_3
    iget-object v0, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    .line 632
    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v0

    const/high16 v2, 0x8000000

    invoke-static {v0, v9, v11, v2}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v0

    .line 635
    iget-boolean v2, v3, Lcom/mbridge/msdk/mbdownload/b$a;->r:Z

    if-eqz v2, :cond_6

    .line 636
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v2}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v2

    iget-object v5, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v5}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v5

    invoke-virtual {v5}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5}, Lcom/mbridge/msdk/mbdownload/g;->j(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v2, v5, v0}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;Ljava/lang/String;Landroid/app/PendingIntent;)Landroid/app/Notification;

    move-result-object v0

    goto :goto_4

    .line 638
    :cond_6
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v2}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v2

    iget-object v5, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v5}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v5

    invoke-virtual {v5}, Landroid/app/Service;->getBaseContext()Landroid/content/Context;

    move-result-object v5

    invoke-static {v5}, Lcom/mbridge/msdk/mbdownload/g;->i(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v2, v5, v0}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;Ljava/lang/String;Landroid/app/PendingIntent;)Landroid/app/Notification;

    move-result-object v0

    :goto_4
    if-eqz v0, :cond_7

    const/16 v2, 0x10

    .line 641
    iput v2, v0, Landroid/app/Notification;->flags:I
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_4
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    .line 644
    :try_start_7
    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v2}, Lcom/mbridge/msdk/mbdownload/c;->c(Lcom/mbridge/msdk/mbdownload/c;)Landroid/support/v4/app/NotificationManagerCompat;

    move-result-object v2

    add-int/lit8 v5, v4, 0x1

    invoke-virtual {v2, v5, v0}, Landroid/support/v4/app/NotificationManagerCompat;->notify(ILandroid/app/Notification;)V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_3
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    goto :goto_5

    :catch_3
    move-exception v0

    .line 646
    :try_start_8
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 649
    :goto_5
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->a:Ljava/lang/String;

    const-string v2, "Show new  notification...."

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 651
    :cond_7
    iget-object v0, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/c;->a(Lcom/mbridge/msdk/mbdownload/c;)Lcom/mbridge/msdk/mbdownload/e;

    move-result-object v0

    iget-object v2, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v2}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v2

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;)Z

    move-result v0

    .line 652
    sget-object v2, Lcom/mbridge/msdk/mbdownload/c;->a:Ljava/lang/String;

    const-string v5, "isAppOnForeground = %1$B"

    new-array v7, v10, [Ljava/lang/Object;

    .line 653
    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v11

    aput-object v11, v7, v9

    .line 652
    invoke-static {v5, v7}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v2, v5}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v0, :cond_8

    .line 659
    iget-boolean v0, v3, Lcom/mbridge/msdk/mbdownload/b$a;->r:Z

    if-nez v0, :cond_8

    .line 660
    iget-object v0, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/c;->c(Lcom/mbridge/msdk/mbdownload/c;)Landroid/support/v4/app/NotificationManagerCompat;

    move-result-object v0

    add-int/lit8 v2, v4, 0x1

    invoke-virtual {v0, v2}, Landroid/support/v4/app/NotificationManagerCompat;->cancel(I)V

    .line 661
    iget-object v0, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/c;->b(Lcom/mbridge/msdk/mbdownload/c;)Landroid/app/Service;

    move-result-object v0

    iget-object v2, v3, Lcom/mbridge/msdk/mbdownload/b$a;->g:Ljava/lang/String;

    invoke-static {v0, v2}, Lcom/mbridge/msdk/click/c;->c(Landroid/content/Context;Ljava/lang/String;)V

    .line 666
    :cond_8
    sget-object v0, Lcom/mbridge/msdk/mbdownload/c;->a:Ljava/lang/String;

    const-string v2, "%1$10s downloaded. Saved to: %2$s"

    new-array v5, v8, [Ljava/lang/Object;

    iget-object v3, v3, Lcom/mbridge/msdk/mbdownload/b$a;->c:Ljava/lang/String;

    aput-object v3, v5, v9

    aput-object v6, v5, v10

    invoke-static {v2, v5}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v2}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_4
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    goto :goto_6

    :catch_4
    move-exception v0

    .line 669
    sget-object v2, Lcom/mbridge/msdk/mbdownload/c;->a:Ljava/lang/String;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "can not install. "

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 671
    iget-object v0, v1, Lcom/mbridge/msdk/mbdownload/c$a;->a:Lcom/mbridge/msdk/mbdownload/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbdownload/c;->c(Lcom/mbridge/msdk/mbdownload/c;)Landroid/support/v4/app/NotificationManagerCompat;

    move-result-object v0

    add-int/2addr v4, v10

    invoke-virtual {v0, v4}, Landroid/support/v4/app/NotificationManagerCompat;->cancel(I)V

    :catchall_0
    :goto_6
    return-void
.end method
