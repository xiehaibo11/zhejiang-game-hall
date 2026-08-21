.class public final Lnet/grandcentrix/tray/provider/TrayUri$a;
.super Ljava/lang/Object;
.source "TrayUri.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lnet/grandcentrix/tray/provider/TrayUri;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x11
    name = "a"
.end annotation


# instance fields
.field private a:Z

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Lnet/grandcentrix/tray/core/TrayStorage$a;

.field final synthetic e:Lnet/grandcentrix/tray/provider/TrayUri;


# direct methods
.method public constructor <init>(Lnet/grandcentrix/tray/provider/TrayUri;Landroid/content/Context;)V
    .locals 1
    .param p1, "this$0"    # Lnet/grandcentrix/tray/provider/TrayUri;
    .param p2, "context"    # Landroid/content/Context;

    .line 26
    iput-object p1, p0, Lnet/grandcentrix/tray/provider/TrayUri$a;->e:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 24
    sget-object v0, Lnet/grandcentrix/tray/core/TrayStorage$a;->a:Lnet/grandcentrix/tray/core/TrayStorage$a;

    iput-object v0, p0, Lnet/grandcentrix/tray/provider/TrayUri$a;->d:Lnet/grandcentrix/tray/core/TrayStorage$a;

    .line 27
    invoke-virtual {p2}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    invoke-static {p1, v0}, Lnet/grandcentrix/tray/provider/TrayUri;->access$002(Lnet/grandcentrix/tray/provider/TrayUri;Landroid/content/Context;)Landroid/content/Context;

    .line 28
    return-void
.end method


# virtual methods
.method public a()Landroid/net/Uri;
    .locals 4

    .line 31
    iget-boolean v0, p0, Lnet/grandcentrix/tray/provider/TrayUri$a;->a:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayUri$a;->e:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-static {v0}, Lnet/grandcentrix/tray/provider/TrayUri;->access$100(Lnet/grandcentrix/tray/provider/TrayUri;)Landroid/net/Uri;

    move-result-object v0

    goto :goto_0

    :cond_0
    iget-object v0, p0, Lnet/grandcentrix/tray/provider/TrayUri$a;->e:Lnet/grandcentrix/tray/provider/TrayUri;

    invoke-static {v0}, Lnet/grandcentrix/tray/provider/TrayUri;->access$200(Lnet/grandcentrix/tray/provider/TrayUri;)Landroid/net/Uri;

    move-result-object v0

    .line 32
    .local v0, "uri":Landroid/net/Uri;
    :goto_0
    invoke-virtual {v0}, Landroid/net/Uri;->buildUpon()Landroid/net/Uri$Builder;

    move-result-object v1

    .line 33
    .local v1, "builder":Landroid/net/Uri$Builder;
    iget-object v2, p0, Lnet/grandcentrix/tray/provider/TrayUri$a;->c:Ljava/lang/String;

    if-eqz v2, :cond_1

    .line 34
    invoke-virtual {v1, v2}, Landroid/net/Uri$Builder;->appendPath(Ljava/lang/String;)Landroid/net/Uri$Builder;

    .line 36
    :cond_1
    iget-object v2, p0, Lnet/grandcentrix/tray/provider/TrayUri$a;->b:Ljava/lang/String;

    if-eqz v2, :cond_2

    .line 37
    invoke-virtual {v1, v2}, Landroid/net/Uri$Builder;->appendPath(Ljava/lang/String;)Landroid/net/Uri$Builder;

    .line 39
    :cond_2
    iget-object v2, p0, Lnet/grandcentrix/tray/provider/TrayUri$a;->d:Lnet/grandcentrix/tray/core/TrayStorage$a;

    sget-object v3, Lnet/grandcentrix/tray/core/TrayStorage$a;->a:Lnet/grandcentrix/tray/core/TrayStorage$a;

    if-eq v2, v3, :cond_4

    .line 40
    nop

    .line 41
    sget-object v3, Lnet/grandcentrix/tray/core/TrayStorage$a;->b:Lnet/grandcentrix/tray/core/TrayStorage$a;

    invoke-virtual {v3, v2}, Ljava/lang/Enum;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_3

    const-string v2, "true"

    goto :goto_1

    :cond_3
    const-string v2, "false"

    .line 40
    :goto_1
    const-string v3, "backup"

    invoke-virtual {v1, v3, v2}, Landroid/net/Uri$Builder;->appendQueryParameter(Ljava/lang/String;Ljava/lang/String;)Landroid/net/Uri$Builder;

    .line 43
    :cond_4
    invoke-virtual {v1}, Landroid/net/Uri$Builder;->build()Landroid/net/Uri;

    move-result-object v2

    return-object v2
.end method

.method public a(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;
    .locals 0
    .param p1, "key"    # Ljava/lang/String;

    .line 52
    iput-object p1, p0, Lnet/grandcentrix/tray/provider/TrayUri$a;->b:Ljava/lang/String;

    .line 53
    return-object p0
.end method

.method public a(Lnet/grandcentrix/tray/core/TrayStorage$a;)Lnet/grandcentrix/tray/provider/TrayUri$a;
    .locals 0
    .param p1, "type"    # Lnet/grandcentrix/tray/core/TrayStorage$a;

    .line 62
    iput-object p1, p0, Lnet/grandcentrix/tray/provider/TrayUri$a;->d:Lnet/grandcentrix/tray/core/TrayStorage$a;

    .line 63
    return-object p0
.end method

.method public a(Z)Lnet/grandcentrix/tray/provider/TrayUri$a;
    .locals 0
    .param p1, "internal"    # Z

    .line 47
    iput-boolean p1, p0, Lnet/grandcentrix/tray/provider/TrayUri$a;->a:Z

    .line 48
    return-object p0
.end method

.method public b(Ljava/lang/String;)Lnet/grandcentrix/tray/provider/TrayUri$a;
    .locals 0
    .param p1, "module"    # Ljava/lang/String;

    .line 57
    iput-object p1, p0, Lnet/grandcentrix/tray/provider/TrayUri$a;->c:Ljava/lang/String;

    .line 58
    return-object p0
.end method
