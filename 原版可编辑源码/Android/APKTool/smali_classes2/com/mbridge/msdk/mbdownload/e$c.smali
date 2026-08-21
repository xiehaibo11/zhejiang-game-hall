.class final Lcom/mbridge/msdk/mbdownload/e$c;
.super Landroid/os/AsyncTask;
.source "DownloadTool.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbdownload/e;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = "c"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Landroid/os/AsyncTask<",
        "Ljava/lang/String;",
        "Ljava/lang/Void;",
        "Ljava/lang/Integer;",
        ">;"
    }
.end annotation


# instance fields
.field public a:I

.field public b:Ljava/lang/String;

.field final synthetic c:Lcom/mbridge/msdk/mbdownload/e;

.field private d:Lcom/mbridge/msdk/mbdownload/b$a;

.field private e:Landroid/content/Context;

.field private f:Landroid/app/NotificationManager;


# direct methods
.method public constructor <init>(Lcom/mbridge/msdk/mbdownload/e;Landroid/content/Context;ILcom/mbridge/msdk/mbdownload/b$a;Ljava/lang/String;)V
    .locals 0

    .line 847
    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->c:Lcom/mbridge/msdk/mbdownload/e;

    .line 848
    invoke-direct {p0}, Landroid/os/AsyncTask;-><init>()V

    .line 849
    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->e:Landroid/content/Context;

    const-string p2, "notification"

    .line 851
    invoke-virtual {p1, p2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/app/NotificationManager;

    iput-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->f:Landroid/app/NotificationManager;

    .line 852
    invoke-static {}, Lcom/mbridge/msdk/mbdownload/j;->a()V

    .line 853
    iput p3, p0, Lcom/mbridge/msdk/mbdownload/e$c;->a:I

    .line 854
    iput-object p4, p0, Lcom/mbridge/msdk/mbdownload/e$c;->d:Lcom/mbridge/msdk/mbdownload/b$a;

    .line 855
    iput-object p5, p0, Lcom/mbridge/msdk/mbdownload/e$c;->b:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method protected final synthetic doInBackground([Ljava/lang/Object;)Ljava/lang/Object;
    .locals 0

    .line 839
    check-cast p1, [Ljava/lang/String;

    const/4 p1, 0x1

    .line 2881
    invoke-static {p1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p1

    return-object p1
.end method

.method protected final synthetic onPostExecute(Ljava/lang/Object;)V
    .locals 13

    const-string v0, "application/vnd.android.package-archive"

    .line 839
    check-cast p1, Ljava/lang/Integer;

    .line 1888
    :try_start_0
    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/4 v1, 0x5

    const-string v2, "filename"

    const/4 v3, 0x3

    const/4 v4, 0x1

    if-ne p1, v4, :cond_5

    .line 1889
    :try_start_1
    new-instance p1, Landroid/content/Intent;

    const-string v5, "android.intent.action.VIEW"

    invoke-direct {p1, v5}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    const/high16 v5, 0x10000000

    .line 1890
    invoke-virtual {p1, v5}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    const/4 v5, 0x0

    .line 1892
    :try_start_2
    iget-object v6, p0, Lcom/mbridge/msdk/mbdownload/e$c;->e:Landroid/content/Context;

    invoke-static {v6}, Lcom/mbridge/msdk/foundation/tools/v;->w(Landroid/content/Context;)I

    move-result v6

    const/16 v7, 0x18

    if-lt v6, v7, :cond_1

    .line 1893
    sget v6, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    if-lt v6, v7, :cond_1

    const/4 v6, 0x0

    .line 1897
    :try_start_3
    sget-object v7, Lcom/mbridge/msdk/MBridgeConstans;->FILE_PROVIDE_CUSTOM_PATH:Ljava/lang/String;

    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    const-string v8, ".mbFileProvider"

    if-nez v7, :cond_0

    .line 1898
    :try_start_4
    sget-object v7, Lcom/mbridge/msdk/MBridgeConstans;->FILE_PROVIDE_CUSTOM_PATH:Ljava/lang/String;

    invoke-static {v7}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v7

    const-string v9, "getUriForFile"

    new-array v10, v3, [Ljava/lang/Class;

    .line 1899
    const-class v11, Landroid/content/Context;

    aput-object v11, v10, v5

    const-class v11, Ljava/lang/String;

    aput-object v11, v10, v4

    const-class v11, Ljava/io/File;

    const/4 v12, 0x2

    aput-object v11, v10, v12

    invoke-virtual {v7, v9, v10}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v7

    new-array v3, v3, [Ljava/lang/Object;

    .line 1900
    iget-object v9, p0, Lcom/mbridge/msdk/mbdownload/e$c;->e:Landroid/content/Context;

    aput-object v9, v3, v5

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v10, p0, Lcom/mbridge/msdk/mbdownload/e$c;->e:Landroid/content/Context;

    invoke-virtual {v10}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v10

    invoke-virtual {v10}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    aput-object v8, v3, v4

    new-instance v8, Ljava/io/File;

    iget-object v9, p0, Lcom/mbridge/msdk/mbdownload/e$c;->b:Ljava/lang/String;

    invoke-direct {v8, v9}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    aput-object v8, v3, v12

    invoke-virtual {v7, v6, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/net/Uri;

    check-cast v3, Landroid/net/Uri;

    goto :goto_0

    .line 1902
    :cond_0
    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/e$c;->e:Landroid/content/Context;

    new-instance v7, Ljava/lang/StringBuilder;

    invoke-direct {v7}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v9, p0, Lcom/mbridge/msdk/mbdownload/e$c;->e:Landroid/content/Context;

    invoke-virtual {v9}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v9

    invoke-virtual {v9}, Landroid/content/Context;->getPackageName()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {v7, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    new-instance v8, Ljava/io/File;

    iget-object v9, p0, Lcom/mbridge/msdk/mbdownload/e$c;->b:Ljava/lang/String;

    invoke-direct {v8, v9}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v3, v7, v8}, Lcom/mbridge/msdk/foundation/tools/MBFileProvider;->getUriForFile(Landroid/content/Context;Ljava/lang/String;Ljava/io/File;)Landroid/net/Uri;

    move-result-object v3
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    :goto_0
    move-object v6, v3

    goto :goto_1

    :catch_0
    move-exception v3

    .line 1907
    :try_start_5
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    if-eqz v6, :cond_2

    .line 1910
    invoke-virtual {p1, v6, v0}, Landroid/content/Intent;->setDataAndType(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;

    .line 1911
    invoke-virtual {p1, v4}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    goto :goto_2

    .line 1914
    :cond_1
    new-instance v3, Ljava/io/File;

    iget-object v6, p0, Lcom/mbridge/msdk/mbdownload/e$c;->b:Ljava/lang/String;

    invoke-direct {v3, v6}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v3}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v3

    invoke-virtual {p1, v3, v0}, Landroid/content/Intent;->setDataAndType(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    goto :goto_2

    .line 1917
    :catch_1
    :try_start_6
    new-instance v3, Ljava/io/File;

    iget-object v6, p0, Lcom/mbridge/msdk/mbdownload/e$c;->b:Ljava/lang/String;

    invoke-direct {v3, v6}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    invoke-static {v3}, Landroid/net/Uri;->fromFile(Ljava/io/File;)Landroid/net/Uri;

    move-result-object v3

    invoke-virtual {p1, v3, v0}, Landroid/content/Intent;->setDataAndType(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/Intent;

    .line 1919
    :cond_2
    :goto_2
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$c;->e:Landroid/content/Context;

    const/high16 v3, 0x8000000

    invoke-static {v0, v5, p1, v3}, Landroid/app/PendingIntent;->getActivity(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;

    move-result-object v0

    .line 1922
    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/e$c;->e:Landroid/content/Context;

    iget-object v5, p0, Lcom/mbridge/msdk/mbdownload/e$c;->e:Landroid/content/Context;

    invoke-static {v5}, Lcom/mbridge/msdk/mbdownload/g;->g(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v3, v5, v0}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;Ljava/lang/String;Landroid/app/PendingIntent;)Landroid/app/Notification;

    move-result-object v0

    if-eqz v0, :cond_3

    const/16 v3, 0x10

    .line 1924
    iput v3, v0, Landroid/app/Notification;->flags:I

    .line 1925
    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/e$c;->f:Landroid/app/NotificationManager;

    iget v5, p0, Lcom/mbridge/msdk/mbdownload/e$c;->a:I

    add-int/2addr v5, v4

    invoke-virtual {v3, v5, v0}, Landroid/app/NotificationManager;->notify(ILandroid/app/Notification;)V

    .line 1927
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$c;->c:Lcom/mbridge/msdk/mbdownload/e;

    iget-object v3, p0, Lcom/mbridge/msdk/mbdownload/e$c;->e:Landroid/content/Context;

    invoke-virtual {v0, v3}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_4

    .line 1929
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$c;->f:Landroid/app/NotificationManager;

    iget v3, p0, Lcom/mbridge/msdk/mbdownload/e$c;->a:I

    add-int/2addr v3, v4

    invoke-virtual {v0, v3}, Landroid/app/NotificationManager;->cancel(I)V

    .line 1930
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$c;->e:Landroid/content/Context;

    invoke-virtual {v0, p1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    .line 1932
    :cond_4
    new-instance p1, Landroid/os/Bundle;

    invoke-direct {p1}, Landroid/os/Bundle;-><init>()V

    .line 1933
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$c;->b:Ljava/lang/String;

    invoke-virtual {p1, v2, v0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1936
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 1937
    iput v1, v0, Landroid/os/Message;->what:I

    .line 1938
    iput v4, v0, Landroid/os/Message;->arg1:I

    .line 1939
    iget v1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->a:I

    iput v1, v0, Landroid/os/Message;->arg2:I

    .line 1940
    invoke-virtual {v0, p1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    .line 1943
    :try_start_7
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->c:Lcom/mbridge/msdk/mbdownload/e;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/e;->a(Lcom/mbridge/msdk/mbdownload/e;)Ljava/util/Map;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->d:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_6

    .line 1944
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->c:Lcom/mbridge/msdk/mbdownload/e;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/e;->a(Lcom/mbridge/msdk/mbdownload/e;)Ljava/util/Map;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->d:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/os/Messenger;

    invoke-virtual {p1, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_7
    .catch Landroid/os/RemoteException; {:try_start_7 .. :try_end_7} :catch_2
    .catchall {:try_start_7 .. :try_end_7} :catchall_0

    goto :goto_3

    .line 1948
    :catch_2
    :try_start_8
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->c:Lcom/mbridge/msdk/mbdownload/e;

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$c;->e:Landroid/content/Context;

    iget v1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->a:I

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;I)V

    goto :goto_3

    .line 1952
    :cond_5
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->f:Landroid/app/NotificationManager;

    iget v0, p0, Lcom/mbridge/msdk/mbdownload/e$c;->a:I

    add-int/2addr v0, v4

    invoke-virtual {p1, v0}, Landroid/app/NotificationManager;->cancel(I)V

    .line 1953
    new-instance p1, Landroid/os/Bundle;

    invoke-direct {p1}, Landroid/os/Bundle;-><init>()V

    .line 1954
    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$c;->b:Ljava/lang/String;

    invoke-virtual {p1, v2, v0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    .line 1957
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    .line 1958
    iput v1, v0, Landroid/os/Message;->what:I

    .line 1959
    iput v3, v0, Landroid/os/Message;->arg1:I

    .line 1960
    iget v1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->a:I

    iput v1, v0, Landroid/os/Message;->arg2:I

    .line 1961
    invoke-virtual {v0, p1}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_0

    .line 1964
    :try_start_9
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->c:Lcom/mbridge/msdk/mbdownload/e;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/e;->a(Lcom/mbridge/msdk/mbdownload/e;)Ljava/util/Map;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->d:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_6

    .line 1965
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->c:Lcom/mbridge/msdk/mbdownload/e;

    invoke-static {p1}, Lcom/mbridge/msdk/mbdownload/e;->a(Lcom/mbridge/msdk/mbdownload/e;)Ljava/util/Map;

    move-result-object p1

    iget-object v1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->d:Lcom/mbridge/msdk/mbdownload/b$a;

    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/os/Messenger;

    invoke-virtual {p1, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_9
    .catch Landroid/os/RemoteException; {:try_start_9 .. :try_end_9} :catch_3
    .catchall {:try_start_9 .. :try_end_9} :catchall_0

    goto :goto_3

    .line 1969
    :catch_3
    :try_start_a
    iget-object p1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->c:Lcom/mbridge/msdk/mbdownload/e;

    iget-object v0, p0, Lcom/mbridge/msdk/mbdownload/e$c;->e:Landroid/content/Context;

    iget v1, p0, Lcom/mbridge/msdk/mbdownload/e$c;->a:I

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/mbdownload/e;->a(Landroid/content/Context;I)V
    :try_end_a
    .catchall {:try_start_a .. :try_end_a} :catchall_0

    :catchall_0
    :cond_6
    :goto_3
    return-void
.end method

.method protected final onPreExecute()V
    .locals 0

    .line 861
    invoke-super {p0}, Landroid/os/AsyncTask;->onPreExecute()V

    return-void
.end method
