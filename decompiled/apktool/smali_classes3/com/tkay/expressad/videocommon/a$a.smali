.class public final Lcom/tkay/expressad/videocommon/a$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/videocommon/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

.field private b:Z


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 28
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;
    .locals 1

    .line 33
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/a$a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    return-object v0
.end method

.method public final a(Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;)V
    .locals 0

    .line 37
    iput-object p1, p0, Lcom/tkay/expressad/videocommon/a$a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 1

    .line 41
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/a$a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 42
    invoke-virtual {v0, p1}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->setTag(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method public final a(Z)V
    .locals 0

    .line 58
    iput-boolean p1, p0, Lcom/tkay/expressad/videocommon/a$a;->b:Z

    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 47
    iget-object v0, p0, Lcom/tkay/expressad/videocommon/a$a;->a:Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;

    if-eqz v0, :cond_0

    .line 48
    invoke-virtual {v0}, Lcom/tkay/expressad/atsignalcommon/windvane/WindVaneWebView;->getTag()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public final c()Z
    .locals 1

    .line 54
    iget-boolean v0, p0, Lcom/tkay/expressad/videocommon/a$a;->b:Z

    return v0
.end method
