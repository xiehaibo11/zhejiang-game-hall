.class public abstract Lcom/tkay/basead/mraid/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/atsignalcommon/mraid/IMraidJSBridge;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 0

    return-void
.end method

.method public final expand(Ljava/lang/String;Z)V
    .locals 0

    return-void
.end method

.method public final getMraidCampaign()Lcom/tkay/expressad/foundation/d/c;
    .locals 1

    const/4 v0, 0x0

    return-object v0
.end method

.method public final unload()V
    .locals 0

    .line 12
    invoke-virtual {p0}, Lcom/tkay/basead/mraid/b;->close()V

    return-void
.end method

.method public useCustomClose(Z)V
    .locals 0

    return-void
.end method
