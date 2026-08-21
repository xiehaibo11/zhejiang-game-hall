.class final Lcom/bykv/vk/openvk/api/plugin/pt$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bykv/vk/openvk/api/plugin/pt;->df(Ljava/lang/String;Lorg/json/JSONObject;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic df:Lorg/json/JSONObject;

.field final synthetic rg:Ljava/lang/String;


# direct methods
.method constructor <init>(Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 0

    .line 118
    iput-object p1, p0, Lcom/bykv/vk/openvk/api/plugin/pt$1;->rg:Ljava/lang/String;

    iput-object p2, p0, Lcom/bykv/vk/openvk/api/plugin/pt$1;->df:Lorg/json/JSONObject;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 121
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    .line 122
    iget-object v1, p0, Lcom/bykv/vk/openvk/api/plugin/pt$1;->rg:Ljava/lang/String;

    iget-object v2, p0, Lcom/bykv/vk/openvk/api/plugin/pt$1;->df:Lorg/json/JSONObject;

    invoke-static {v1, v2}, Lcom/bykv/vk/openvk/api/plugin/pt;->pt(Ljava/lang/String;Lorg/json/JSONObject;)Lorg/json/JSONObject;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 123
    invoke-static {v0}, Lcom/bykv/vk/openvk/api/plugin/pt;->df(Ljava/util/List;)V

    return-void
.end method
