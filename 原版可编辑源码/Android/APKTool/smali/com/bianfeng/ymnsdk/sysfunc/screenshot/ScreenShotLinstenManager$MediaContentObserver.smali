.class Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;
.super Landroid/database/ContentObserver;
.source "ScreenShotLinstenManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "MediaContentObserver"
.end annotation


# instance fields
.field private final mContentUri:Landroid/net/Uri;

.field final synthetic this$0:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;


# direct methods
.method public constructor <init>(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;Landroid/net/Uri;Landroid/os/Handler;)V
    .locals 0

    .line 357
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;

    .line 358
    invoke-direct {p0, p3}, Landroid/database/ContentObserver;-><init>(Landroid/os/Handler;)V

    const-string p1, "into MediaContentObserver"

    .line 359
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 360
    iput-object p2, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;->mContentUri:Landroid/net/Uri;

    return-void
.end method


# virtual methods
.method public onChange(Z)V
    .locals 1

    .line 365
    invoke-super {p0, p1}, Landroid/database/ContentObserver;->onChange(Z)V

    const-string p1, "ContentObserver onChange"

    .line 366
    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->d(Ljava/lang/String;)I

    .line 367
    iget-object p1, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;->this$0:Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;

    iget-object v0, p0, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager$MediaContentObserver;->mContentUri:Landroid/net/Uri;

    invoke-static {p1, v0}, Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;->access$000(Lcom/bianfeng/ymnsdk/sysfunc/screenshot/ScreenShotLinstenManager;Landroid/net/Uri;)V

    return-void
.end method
