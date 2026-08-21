.class public final Lcom/tkay/expressad/videocommon/b/e;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String; = "<tkayloadend></tkayloadend>"

.field private static final b:Ljava/lang/String; = "DownLoadUtils"

.field private static final c:I = 0x4e20

.field private static final d:I = 0x7530


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Ljava/lang/String;Lcom/tkay/expressad/videocommon/b/g$c;)V
    .locals 2

    .line 26
    :try_start_0
    invoke-static {p0}, Lcom/tkay/expressad/foundation/h/w;->a(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p0}, Landroid/webkit/URLUtil;->isNetworkUrl(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 1017
    :cond_0
    sget-object v0, Lcom/tkay/expressad/videocommon/b/f$a;->a:Lcom/tkay/expressad/videocommon/b/f;

    .line 32
    new-instance v1, Lcom/tkay/expressad/videocommon/b/e$1;

    invoke-direct {v1, p1, p0}, Lcom/tkay/expressad/videocommon/b/e$1;-><init>(Lcom/tkay/expressad/videocommon/b/g$c;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/videocommon/b/f;->a(Lcom/tkay/expressad/foundation/g/g/a;)V

    return-void

    :cond_1
    :goto_0
    const-string p0, "url is error"

    .line 28
    invoke-interface {p1, p0}, Lcom/tkay/expressad/videocommon/b/g$c;->a(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    .line 133
    sget-boolean p1, Lcom/tkay/expressad/b;->a:Z

    if-eqz p1, :cond_2

    .line 134
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    return-void
.end method
