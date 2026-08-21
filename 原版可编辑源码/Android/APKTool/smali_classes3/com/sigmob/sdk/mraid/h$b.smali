.class Lcom/sigmob/sdk/mraid/h$b;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/media/MediaScannerConnection$MediaScannerConnectionClient;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/mraid/h;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "b"
.end annotation


# instance fields
.field private final a:Ljava/lang/String;

.field private final b:Ljava/lang/String;

.field private c:Landroid/media/MediaScannerConnection;


# direct methods
.method private constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/h$b;->a:Ljava/lang/String;

    iput-object p2, p0, Lcom/sigmob/sdk/mraid/h$b;->b:Ljava/lang/String;

    return-void
.end method

.method private a(Landroid/media/MediaScannerConnection;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/h$b;->c:Landroid/media/MediaScannerConnection;

    return-void
.end method


# virtual methods
.method public onMediaScannerConnected()V
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/h$b;->c:Landroid/media/MediaScannerConnection;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/mraid/h$b;->a:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/h$b;->b:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Landroid/media/MediaScannerConnection;->scanFile(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public onScanCompleted(Ljava/lang/String;Landroid/net/Uri;)V
    .locals 0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/h$b;->c:Landroid/media/MediaScannerConnection;

    if-eqz p1, :cond_0

    invoke-virtual {p1}, Landroid/media/MediaScannerConnection;->disconnect()V

    :cond_0
    return-void
.end method
