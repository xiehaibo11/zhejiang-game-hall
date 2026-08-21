.class public Lcom/ss/android/socialbase/appdownloader/rg/bm;
.super Lcom/ss/android/socialbase/appdownloader/rg/rg;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Ljava/lang/String;)V
    .locals 0

    .line 14
    invoke-direct {p0, p1, p2, p3}, Lcom/ss/android/socialbase/appdownloader/rg/rg;-><init>(Landroid/content/Context;Lcom/ss/android/socialbase/downloader/setting/DownloadSetting;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public df()Landroid/content/Intent;
    .locals 3

    .line 19
    new-instance v0, Landroid/content/Intent;

    const-string v1, "com.android.filemanager.FILE_OPEN"

    invoke-direct {v0, v1}, Landroid/content/Intent;-><init>(Ljava/lang/String;)V

    .line 20
    iget-object v1, p0, Lcom/ss/android/socialbase/appdownloader/rg/bm;->q:Ljava/lang/String;

    const-string v2, "FilePathToBeOpenAfterScan"

    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Ljava/lang/String;)Landroid/content/Intent;

    const/4 v1, 0x1

    const-string v2, "com.iqoo.secure"

    .line 21
    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    const-string v2, "OpenParentAndLocationDestFile"

    .line 22
    invoke-virtual {v0, v2, v1}, Landroid/content/Intent;->putExtra(Ljava/lang/String;Z)Landroid/content/Intent;

    const/high16 v1, 0x10000000

    .line 23
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const v1, 0x8000

    .line 24
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    const/high16 v1, 0x40000000    # 2.0f

    .line 25
    invoke-virtual {v0, v1}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    return-object v0
.end method
