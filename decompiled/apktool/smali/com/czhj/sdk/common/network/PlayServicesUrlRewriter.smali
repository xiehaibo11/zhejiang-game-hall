.class Lcom/czhj/sdk/common/network/PlayServicesUrlRewriter;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/volley/toolbox/HurlStack$UrlRewriter;


# static fields
.field private static final a:Ljava/lang/String; = "mp_tmpl_advertising_id"

.field private static final b:Ljava/lang/String; = "mp_tmpl_do_not_track"


# direct methods
.method constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public rewriteUrl(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    const-string v0, "mp_tmpl_advertising_id"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    const-string v0, "mp_tmpl_do_not_track"

    invoke-virtual {p1, v0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    :cond_0
    return-object p1
.end method
