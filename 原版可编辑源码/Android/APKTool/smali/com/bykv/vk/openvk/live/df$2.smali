.class Lcom/bykv/vk/openvk/live/df$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/bytedance/android/live/base/api/MethodChannelService;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/live/df;->pp()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic rg:Lcom/bykv/vk/openvk/live/df;


# direct methods
.method constructor <init>(Lcom/bykv/vk/openvk/live/df;)V
    .locals 0

    .line 216
    iput-object p1, p0, Lcom/bykv/vk/openvk/live/df$2;->rg:Lcom/bykv/vk/openvk/live/df;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public identity()Ljava/lang/String;
    .locals 1

    const-string v0, "pangle"

    return-object v0
.end method

.method public varargs invokeMethod(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    .locals 4

    .line 220
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    if-eqz v0, :cond_0

    return-object v1

    :cond_0
    const/4 v0, -0x1

    .line 223
    invoke-virtual {p1}, Ljava/lang/String;->hashCode()I

    move-result v2

    const v3, -0x38f3724c

    if-eq v2, v3, :cond_1

    goto :goto_0

    :cond_1
    const-string v2, "getBiddingToken"

    invoke-virtual {p1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    const/4 v0, 0x0

    :cond_2
    :goto_0
    if-eqz v0, :cond_3

    return-object v1

    .line 225
    :cond_3
    iget-object p1, p0, Lcom/bykv/vk/openvk/live/df$2;->rg:Lcom/bykv/vk/openvk/live/df;

    invoke-static {p1, p2}, Lcom/bykv/vk/openvk/live/df;->rg(Lcom/bykv/vk/openvk/live/df;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    return-object p1
.end method
