.class public final Lcom/bianfeng/reslibrary/R$string;
.super Ljava/lang/Object;
.source "R.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/reslibrary/R;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "string"
.end annotation


# static fields
.field public static final app_reslibrary_name:I


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 62
    sget v0, Lcom/bianfeng/splitscreenlib/R$string;->app_reslibrary_name:I

    sput v0, Lcom/bianfeng/reslibrary/R$string;->app_reslibrary_name:I

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 61
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
