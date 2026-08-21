.class public final Lcom/bianfeng/roomlib/R$id;
.super Ljava/lang/Object;
.source "R.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/roomlib/R;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "id"
.end annotation


# static fields
.field public static final gameroom_web_bridge_webView:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 62
    sget v0, Lcom/bianfeng/splitscreenlib/R$id;->gameroom_web_bridge_webView:I

    sput v0, Lcom/bianfeng/roomlib/R$id;->gameroom_web_bridge_webView:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 61
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
