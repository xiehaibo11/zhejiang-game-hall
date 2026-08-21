.class final Lcom/mbridge/msdk/rover/c$3;
.super Ljava/lang/Object;
.source "RoverDoing.java"

# interfaces
.implements Lcom/mbridge/msdk/click/e;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/rover/c;-><init>(Lcom/mbridge/msdk/rover/RoverCampaignUnit;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/rover/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/rover/c;)V
    .locals 0

    .line 125
    iput-object p1, p0, Lcom/mbridge/msdk/rover/c$3;->a:Lcom/mbridge/msdk/rover/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/Object;)V
    .locals 0

    return-void
.end method

.method public final a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 144
    iget-object p1, p0, Lcom/mbridge/msdk/rover/c$3;->a:Lcom/mbridge/msdk/rover/c;

    invoke-static {p1}, Lcom/mbridge/msdk/rover/c;->a(Lcom/mbridge/msdk/rover/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/rover/c$3;->a:Lcom/mbridge/msdk/rover/c;

    invoke-static {p1}, Lcom/mbridge/msdk/rover/c;->a(Lcom/mbridge/msdk/rover/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRoverIsPost()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_0

    .line 145
    iget-object p1, p0, Lcom/mbridge/msdk/rover/c$3;->a:Lcom/mbridge/msdk/rover/c;

    invoke-static {p1}, Lcom/mbridge/msdk/rover/c;->b(Lcom/mbridge/msdk/rover/c;)V

    :cond_0
    return-void
.end method

.method public final b(Ljava/lang/Object;)V
    .locals 1

    .line 137
    iget-object p1, p0, Lcom/mbridge/msdk/rover/c$3;->a:Lcom/mbridge/msdk/rover/c;

    invoke-static {p1}, Lcom/mbridge/msdk/rover/c;->a(Lcom/mbridge/msdk/rover/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/rover/c$3;->a:Lcom/mbridge/msdk/rover/c;

    invoke-static {p1}, Lcom/mbridge/msdk/rover/c;->a(Lcom/mbridge/msdk/rover/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getRoverIsPost()I

    move-result p1

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 138
    iget-object p1, p0, Lcom/mbridge/msdk/rover/c$3;->a:Lcom/mbridge/msdk/rover/c;

    invoke-static {p1}, Lcom/mbridge/msdk/rover/c;->b(Lcom/mbridge/msdk/rover/c;)V

    :cond_0
    return-void
.end method
